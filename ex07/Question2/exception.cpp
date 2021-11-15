// exception.cpp
#include <stdexcept>
#include <cstdio>
#include <iostream>

using namespace std;

class LogFile
{
private:
    /* data */
    FILE *log_file;

public:
    LogFile(const char *_file_name)
    {
        log_file = fopen(_file_name, "w+");
        if (!log_file)
        {
            throw runtime_error("failed to open file");
        }
    }
    ~LogFile()
    {
        fclose(log_file);
    }
    void fputs(const char *write_con)
    {
        const int let = std::fputs(write_con, log_file);
        //std::cout << "check" << std::endl;
    }
};
void doSomeComputation()
{
    throw runtime_error("failure during doing some computation");
}

void example()
{
    /*FILE *logfile = fopen("logfile.txt", "w+");
    if (!logfile)
    {
        throw runtime_error("failed to open file");
    }*/
    const char *file_name = "logfile.txt";
    LogFile *l = new LogFile(file_name);

    try
    {
        l->fputs("log - 1");
        doSomeComputation();

        l->fputs("log - 2");
    } 
    catch(runtime_error e)
    {
        std::cerr << "some_exception: " << e.what() << std::endl;
    }
    catch(...)
    {
        std::cerr << "unknown exeption" << std::endl;
    }
    
    // Call a function that performs some computation and may throw
    // an exception
    cout << "closing logfile" << endl;
}

int main(void)
{
    cout << "Calling example()" << endl;
    example();
    cout << "After calling example()" << endl;
    return 0;
}
