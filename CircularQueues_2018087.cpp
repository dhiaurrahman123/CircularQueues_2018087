

#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, max = 5; //element
    int queue_array[5]; //array
public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }
    void insert() {
        int num; 
        cout << "Enter a number : ";
        cin >> num;
        cout << endl;
        //Cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR = 1)) {
            cout << "\nQueue overflow\n";
            return;
        }
        //cek antrian kosong
        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;
        }
        else {
            //jika rear berada diposisi terakhir array,kembali ke awal
            if (REAR == max - 1)
                REAR = 0;
            else REAR = REAR + 1;
        }

    }
};

int main()
{
    std::cout << "Hello World!\n";
}

