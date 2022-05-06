#include <string>

bool string_cmp(const std::string & str1, const std::string & str2){
    return str1.length() > str2.length();
}


int main(){
    bool (*pf)(const std::string & str1,const std::string & str2);


    pf = string_cmp;
    //same as
    //pf = &string_cmp;
    
    


    bool b1 = (*pf)("abc","hello");
    bool b2 = pf("abc","hello");
}

