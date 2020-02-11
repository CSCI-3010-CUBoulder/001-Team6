#include <iostream>
#include "functions_to_implement.cpp"

int main(){
    std::cout<<"This is main."<<std::endl;
    //Testing RemoveAllSubstrings()
    std::cout<<RemoveAllSubstrings("abcWow this is a abcreally abccool stringabc" "abc")<<std::endl;
    //Should print " Wow this is a really cool string".
    
    //Testing Join()
    //Should pring "I wow really wow like wow writing wow strings wow"
    std::vector<string> hmm = ("I"," really", " like", " writing", " strings")
    std::cout<< Join(hmm, "wow")<<std::endl;

}