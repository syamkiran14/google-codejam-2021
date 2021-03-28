#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <array>
#include <string>


using namespace std;

int main(){
    int T;
    std::cin>>T;
    for(int i=1; i<=T; i++){
        int N;
        std::cin>>N;
        std::vector <int> lyst(N);
        for(int j=0; j<N;j++){
            int x;
            std::cin>>x;
            lyst[j] = x;
        }
        int cost =0;
        int k = 0;

        for(int k=0; k<N;k++){

            std::vector<int>::iterator min = min_element(lyst.begin()+k,lyst.begin()+N);            
            int minpos = std::distance(lyst.begin(),min);

            cost +=((minpos)-k+1);
            reverse(lyst.begin()+k,lyst.begin()+minpos+1);
        }
        
        std::cout<<"case #"<<i<<":"<<" "<<cost-1<< '\n';
    }

    return 0;
}