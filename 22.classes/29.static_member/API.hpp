#ifndef API_HPP
#define API_HPP

struct API{
    API();
    ~API();

    static int MAJOR;
    static int MINOR;

    static int GetMajorVersion();
};

#endif