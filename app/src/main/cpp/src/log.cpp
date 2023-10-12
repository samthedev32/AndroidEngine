//
// Created by samthedev on 10/12/23.
//

#include "include/log.h"

#include <android/log.h>

namespace Log {

        void debug(const char *tag, const char *message, ...) {
            va_list args;
            va_start(args, message);

            __android_log_vprint(ANDROID_LOG_DEBUG, tag, message, args);

            va_end(args);
        }

        void verbose(const char *tag, const char *message, ...) {
            va_list args;
            va_start(args, message);

            __android_log_vprint(ANDROID_LOG_VERBOSE, tag, message, args);

            va_end(args);
        }

        void warning(const char *tag, const char *message, ...) {
            va_list args;
            va_start(args, message);

            __android_log_vprint(ANDROID_LOG_WARN, tag, message, args);

            va_end(args);
        }

        void error(const char *tag, const char *message, ...) {
            va_list args;
            va_start(args, message);

            __android_log_vprint(ANDROID_LOG_ERROR, tag, message, args);

            va_end(args);
        }

    } // namespace Log