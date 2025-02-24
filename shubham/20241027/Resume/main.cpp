#include <iostream>
using namespace std;
namespace ProjectResume
{
  class Resume
  {
    string name;
    string title;
    string phone;
    string email;
    string summary;
    Experience experiences;
    Project projects;
    Education educations;
    string languages[20]; // error without int
    string skills[50];

  public:
    // getters
    string getName(void)
    {
      return name;
    };
    string getTitle(void)
    {
      return title;
    };
    string getPhone(void)
    {
      return phone;
    };
    string getEmail(void)
    {
      return email;
    };
    string getSummary(void)
    {
      return summary;
    };
    Experience getExperiences(void)
    {
      return experiences;
    };
    Project getProjects(void)
    {
      return projects;
    };
    Education getEducations(void)
    {
      return educations;
    };
    string[20] getLanguages(void) // getting error
    {
      return languages;
    };
    string[50] getSkills(void)
    {
      return skills;
    };

    // setters
    void setName(string name)
    {
      this->name = name;
    };
    void setTitle(string title)
    {
      this->title = title;
    };
    void setPhone(string phone)
    {
      this->phone = phone;
    };
    void setEmail(string email)
    {
      this->email = email;
    };
    void setSummary(string summary)
    {
      this->summary = summary;
    };
    void setExperience(Experience experiences)
    {
      this->experiences = experiences;
    };
    void setProjects(Project projects)
    {
      this->projects = projects;
    };
    void setEducations(Education educations)
    {
      this->educations = educations;
    };

    void setLanguages(string language[])
    { // error
      this->languages = languages;
    }
    void setSkills(string skills[])
    { // error
      this->skills = skills;
    }
  };

  class Experience
  {
    int id;
    string position;
    int period_from;
    int period_to;
    string responsibilities[10];

  public:
    int getId(void)
    {
      return id;
    };
    string getPosition(void)
    {
      return position;
    };
    int getPeriodFrom(void)
    {
      return period_from;
    };
    int getPeriodTo(void)
    {
      return period_to;
    };
    string[10] getResponsblities(void)
    {//error
      return responsibilities;
    };
    void setId(int id)
    {
      this->id = id;
    };
    void setPosition(string position) {
      this -> position = position;
    };
    void setPeriodFrom(int period_from)
    {
      this->period_from = period_from;
    };
    void setPeriodTo(int period_to)
    {
      this->period_to = period_to;
    };
    void setResponsiblities(string responsiblities[10])
    { // error
      this->responsibilities = responsibilities;
    }
  };

  class Project
  {
    int id;
    string name;
    string description;

    int getId(void)
    {
      return id;
    };
    string getName(void)
    {
      return name;
    };
    string getDescription(void)
    {
      return description;
    };
    void setName(string name)
    {
      this->name = name;
    };
    void setId(int id)
    {
      this->id = id;
    };
        void setName(string description)
    {
      this->description = description;
    };
  };

  class Education
  {
    int id;
    string name;
    int grade_got;
    int grade_total;
    string university;
    int getId(void)
    {
      return id;
    };
    string getName(void)
    {
      return name;
    };
    int getGradeGot(void)
    {
      return grade_got;
    };
    int getGradeTotal(void)
    {
      return grade_total;
    };
    string getUniversity(void)
    {
      return university;
    };
    void setName(string name)
    {
      this->name = name;
    };
    void setId(int id)
    {
      this->id = id;
    };
    void setGradeGot(int grade_got){
      this->grade_got = grade_got;
    };
    void setGradeTotal(int grade_total){
      this->grade_total = grade_total;
    };
    void setUniversity(string university){
      this->university = university;
    };

  
  };
}
int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}

