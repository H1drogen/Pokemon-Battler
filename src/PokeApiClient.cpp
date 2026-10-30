#include "PokeApiClient.h"

#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include <stdexcept>

using json = nlohmann::json;

namespace {
    size_t writeCallback(void* contents, size_t size, size_t count, void* userData) {
        auto* response = static_cast<std::string*>(userData);
        response->append(static_cast<char*>(contents), size * count);
        return size * count;
    }
}

Pokemon PokeApiClient::fetchPokemon(const std::string& name) {
    CURL* curl = curl_easy_init();

    if (!curl) {
        throw std::runtime_error("Could not initialize HTTP client");
    }

    std::string response;
    const std::string url = "https://pokeapi.co/api/v2/pokemon/" + name;

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    const CURLcode result = curl_easy_perform(curl);
    long statusCode = 0;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &statusCode);
    curl_easy_cleanup(curl);

    if (result != CURLE_OK) {
        throw std::runtime_error(curl_easy_strerror(result));
    }

    if (statusCode != 200) {
        throw std::runtime_error("Pokemon was not found");
    }

}