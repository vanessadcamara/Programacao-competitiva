/* leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.
Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
*/
#include<bits/stdc++.h>
using namespace std;

int a,b,c,d,h,m;
int main(){
    cin >> a >> b >> c >> d;
    m = d-b;
    if(m<0){
        m+=60;
        h--;
    }
    h+=c-a;
    if(h<0)h+=24;
    if(h==0&&m==0)h=24;
    cout << "O JOGO DUROU " << h << " HORA(S) E "<< m << " MINUTO(S)\n";
}
