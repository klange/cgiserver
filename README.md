# A Simple CGI Server #

This is a small CGI server written in C. It has no dependencies outside of the provided files, assuming a POSIX-compatible operating environment.

By default, the server will try to run on port 80. You can supply a different port number as an argument with `-p PORT`, or edit the source to change the default port.

The server will serve files out of the `pages` directory by default, but you can set this using `-f FILE_ROOT`.