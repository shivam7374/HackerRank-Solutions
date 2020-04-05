
template<typename T>
struct Traits{
    static string name(int n){return "unknown";};
};
template<>
struct Traits<Color>{
    static string name(int n){return n==0?"red":n==1?"green":n==2?"orange":"unknown";};
};
template<>
struct Traits<Fruit>{
    static string name(int n){return n==0?"apple":n==1?"orange":n==2?"pear":"unknown";};
};
// Define specializations for the Traits class template here.

