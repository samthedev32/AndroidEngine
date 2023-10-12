//
// Created by samthedev on 10/12/23.
//

#ifndef ANDROIDENGINE_LOG_H
#define ANDROIDENGINE_LOG_H

// Logger
namespace Log {

// Log Debug Information, only visible for DEBUG Builds
void debug(const char *tag, const char *message, ...);

// Log Verbose Information
void verbose(const char *tag, const char *message, ...);

// Log Warning Messages
void warning(const char *tag, const char *message, ...);

// Log Error Message, usually "unrecoverable"
void error(const char *tag, const char *message, ...);

} // namespace Log

#endif //ANDROIDENGINE_LOG_H
