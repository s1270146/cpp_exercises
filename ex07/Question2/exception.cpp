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
    int fputs(const char *write_con)
    {
        const int let = std::fputs(write_con, log_file);
        //std::cout << "check" << std::endl;
        return let;
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

    if(l->fputs("log - 1") < 0) doSomeComputation();
    
    // Call a function that performs some computation and may throw
    // an exception
    //l->doSomeComputation();

    if(l->fputs("log - 2") < 0) doSomeComputation();
    //void doSomeComputation();

    cout << "closing logfile" << endl;
    delete l;
}

int main(void)
{
    cout << "Calling example()" << endl;
    example();
    cout << "After calling example()" << endl;
    return 0;
}
