#include <iostream>
#include<string>
using namespace std;
class report

{

public:
   string subjectname;
   int marks;
   string remarks;
};
int main(){

    report student01;
    student01.subjectname="physics";
    student01.marks=68;
    
    student01.remarks="very bad needs improvement";

    report student02;
    student02.subjectname="physics";
    student02.marks=98;
    student02.remarks="good keep it up";

 std :: cout<<"subject name ="<<student01.subjectname<<"\n"<<"marks ="<<student01.marks<<"\n"<<"remarks="<<student01.remarks<<"\n";
 std :: cout<<"subject name ="<<student02.subjectname<<"\n"<<"marks ="<<student02.marks<<"\n"<<"remarks="<<student02.remarks<<"\n";


return 0;

}
