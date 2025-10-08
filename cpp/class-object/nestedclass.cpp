#include <iostream>

namespace resume
{
    class Resume
    {

    public:
        int r;
        class EducationalQualifition
        {
            public:
            int e;
        };

        // EducationalQualifition educationalQualification[5];
    };
}

int main(int argc, char const *argv[])
{
    std::string connectionString = "Hello";
    resume::Resume resume;
    resume::Resume::EducationalQualifition educationQualification;
    educationQualification.e = 10;
    return 0;
}
