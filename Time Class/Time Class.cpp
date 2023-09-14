#include <iostream>
#include <string>
#include <chrono>

class Time
{
    public:
        Time
        (
            std::chrono::years years,
            std::chrono::months months,
            std::chrono::days days,
            std::chrono::hours hours,
            std::chrono::minutes minutes,
            std::chrono::seconds seconds,
            std::chrono::milliseconds milliseconds
        ) : mYears(years), mMonths(months), mDays(days), mHours(hours),
            mMinutes(minutes), mSeconds(seconds), mMilliseconds(milliseconds)
        {}




    private:
        std::string mName{ };
        std::chrono::milliseconds mMilliseconds{ };
        std::chrono::seconds mSeconds{ };
        std::chrono::minutes mMinutes{ };
        std::chrono::hours mHours{ };
        std::chrono::days mDays{ };
        std::chrono::months mMonths{ };
        std::chrono::years mYears{ };
};

int main()
{
    std::cout << "Hello World!\n";
}