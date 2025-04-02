#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"enter the number of rounds: ";
    cin>>n;
    
    int player1=0, player2=0;
    int maxLead=0, leader=0;
    
    for (int i = 0; i < n; i++) {
        int score1,score2;
        cout<<"enter scores for round " <<i + 1<<": ";
        cin>>score1>>score2;
        
        player1 += score1;
        player2 += score2;
        
        int lead = abs(player1 - player2);
        int currentLeader = (player1 > player2) ? 1 : 2;
        
        if (lead > maxLead) {
            maxLead = lead;
            leader = currentLeader;
        }
    }
    
    cout<<leader<<" lead "<<maxLead<<endl;
    

}