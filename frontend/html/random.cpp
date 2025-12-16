#include <iostream>
#include <string>
#include <cstdlib>  // For getenv
#include <cstdio>   // For safer input

int main() {
    // The ritual: Declare our output as HTML, with a blank line to seal the header
    std::cout << "Content-Type: text/html\r\n\r\n";
    std::cout << "<html><head><title>Form Echo</title></head><body><h1>Your Message Arrives!</h1><pre>\n";

    // Greet the method—GET or POST?
    const char* method = std::getenv("REQUEST_METHOD");
    std::cout << "Method: " << (method ? method : "Unknown") << "\n";

    // For POST: How heavy is the parcel? Read its contents byte by byte.
    const char* lengthStr = std::getenv("CONTENT_LENGTH");
    if (lengthStr && std::string(method) == "POST") {
        int contentLength = std::atoi(lengthStr);
        if (contentLength > 0) {
            std::string postData;
            postData.resize(contentLength);
            std::cin.read(&postData[0], contentLength);  // Sip from stdin, carefully—no overflows here!
            std::cout << "Raw POST Body: " << postData << "\n";
            // What secrets hide in this string? Pairs like "username=foo&semester=1"?
        }
    } else {
        // For GET: The query dangles in the environment, ready to pluck.
        const char* query = std::getenv("QUERY_STRING");
        std::cout << "Query String: " << (query ? query : "Empty") << "\n";
    }

    std::cout << "</pre><p>What patterns do you see? Ready to decode the pairs?</p></body></html>\n";
    return 0;
}