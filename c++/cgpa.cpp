#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <numeric>

using namespace std;

int main(){
    double sum_of_scores;
    int no_of_courses;
    double total_units;
    double weightedScore;;
    double gpaFunc;
    vector <double> scores;
    vector <char> grade = {'A', 'B', 'C','D','E', 'F'};
    vector <string> courses;
    vector <double> creditMulunit;
    vector <int> units;
    
    cout << "How many courses do you offer? "<<endl;
    cin >> no_of_courses;
    for(int i = 1; i <= no_of_courses; i++)
    {
        string temp_ncourses;
        cout << "Enter course "<<i<<" : "<<endl;
        cin >> temp_ncourses;
        courses.push_back(temp_ncourses);
        
    }
    for(int i = 1; i < (courses.size() + 1); i++)
    {
        int temp_nunits;
        cout << "Enter unit for "<<courses[i-1]<<" : "<<endl;
        cin >> temp_nunits;       
        units.push_back(temp_nunits); 
    }
    for(int i = 1; i < (units.size() + 1); i++)
    {
        int temp_nscores;
        cout << "Enter score for "<<courses[i-1]<<" : "<<endl;
        cin >> temp_nscores;
        scores.push_back(temp_nscores);
    }
    // for(int i = 1; i < (scores.size() + 1);i++){
    //     sumMulunit.push_back(units[i] * scores[i]);
    // }
    if(scores.size() > 0){
        cout<<"[  COURSE  ]"<<"\t[  SCORE  ]\t"<<"[  UNIT  ]"<<"\t"<<"[  GRADE  ]"<<endl;
        for(int i = 1; i < (courses.size() + 1); i++)
        {
            if(scores[i-1] >= 80 && scores[i-1] <= 100){
                cout<<""<<courses[i-1]<<"   \t\t"<<scores[i-1]<<"   \t\t"<<""<<units[i-1]<<""<<"   \t\t"<<""<<grade[0]<<endl;
                creditMulunit.push_back(5 * units[i-1]);
            }else if(scores[i-1] >= 60 && scores[i-1] <= 79){
                cout<<""<<courses[i-1]<<"   \t\t"<<scores[i-1]<<"   \t\t"<<""<<units[i-1]<<""<<"   \t\t"<<""<<grade[1]<<endl;
                creditMulunit.push_back(4 * units[i-1]);
            }else if(scores[i-1] >= 50 && scores[i-1] <= 59){
                cout<<""<<courses[i-1]<<"   \t\t"<<scores[i-1]<<"   \t\t"<<""<<units[i-1]<<""<<"   \t\t"<<""<<grade[2]<<endl;
                creditMulunit.push_back(3 * units[i-1]);
            }else if(scores[i-1] >= 45 && scores[i-1] <= 49){
                cout<<""<<courses[i-1]<<"   \t\t"<<scores[i-1]<<"   \t\t"<<""<<units[i-1]<<""<<"   \t\t"<<""<<grade[3]<<endl;
                creditMulunit.push_back(2 * units[i-1]);
            }else if(scores[i-1] >= 40 && scores[i-1] <= 44){
                cout<<""<<courses[i-1]<<"   \t\t"<<scores[i-1]<<"   \t\t"<<""<<units[i-1]<<""<<"   \t\t"<<""<<grade[4]<<endl;
                creditMulunit.push_back(1 * units[i-1]);
            }else if(scores[i-1] >= 0 && scores[i-1] <= 39){
                cout<<""<<courses[i-1]<<"   \t\t"<<scores[i-1]<<"   \t\t"<<""<<units[i-1]<<""<<"   \t\t"<<""<<grade[grade.size() - 1]<<endl;
                creditMulunit.push_back(0 * units[i-1]);
            }
        }
    }
    sum_of_scores = accumulate(units.begin(), units.end(), 0);
    total_units = accumulate(units.begin(), units.end(), 0);
    weightedScore = accumulate(creditMulunit.begin(), creditMulunit.end(),0); 
    gpaFunc = weightedScore / total_units;
    cout<<"Your GPA is: "<<gpaFunc;
    return 0;
}
