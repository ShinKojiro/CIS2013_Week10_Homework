#include <cstdlib>
#include <string>

#using namespace std;

class Parrot(){

    private:

        string name;
        int age;
        double beakLength;
        string[4] featherColors = {"", "", "", "", ""};
        bool has_claws;
        bool is_friendly;
        bool is_cautious;
        bool attention_whore_mode;
        bool is_hungry;

    public:

    void setName(string n){
        name = n;
    }

    void setAge(int a){
        age = a;
    }

    void setBeakLength(double b){
        beakLength = b;
    }

    void setFeatherColor(string[4] f){
        featherColors[0] = f[0];
        featherColors[1] = f[1];
        featherColors[2] = f[2];
        featherColors[3] = f[3];
        featherColors[4] = f[4];
    }

    void setClaws(bool c){
        has_claws = c;
    }
    
    void setIsFriendly(bool fr){
        is_friendly = fr;
    }

    void setIsCautious(bool ca){
        is_cautious = ca;
    }

    void setAttentionWhoreMode(bool wh){
        attention_whore_mode = wh;
    }

    void setHunger(bool h){
        is_hungry = h;
    }


};