#include <iostream>
using namespace std;

int main()
{
    int num_videos; // numero de videos a serem analisados
    int view[100000];  // visualizacoes dos videos
    int i; // contador
    int videos = 0;
    int menor_view = 0;
    int x;
    
    cin >> num_videos;
    
    for (i = 0; i < num_videos; i++)
    {
        cin >> view[x];
        
         if (view[x] > 10000000)
         {
            videos++; 
         }
         else
         {
            menor_view++;
         }
    }
    
    cout << videos << " video(s) com mais de 10M views" << endl;
cout << menor_view << " video(s) com menos de 10M views" << endl;
    
    
    
    
    
    
    
    return 0;
}