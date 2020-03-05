#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){
    Mat gambar=imread("football.jpg");//variebel file footbal.jpg
    if(gambar.empty()){//jika file tidak ditemukan
        cout<<"File gamar tidak ditemukan\n";
        cin.get();
        return -1;
    }
    Mat kecerahan_gambar;
    gambar.convertTo(kecerahan_gambar, -1, 1, -200);
    while(true){
        String nama_jendela="Meningkatkan kecerahan gambar";
        imshow(nama_jendela, kecerahan_gambar);
        if(waitKey(0)==27){//perintah tombol "Esc"
            break;
        }
    }
    
    destroyAllWindows();
    return 0;
}
