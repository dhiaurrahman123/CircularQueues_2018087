

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
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue Overflow";
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
        queue_array[REAR] = num;
    }
    void remove() {
        //cek antrian kosong
        if (FRONT == -1) {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe element deleted from the queue is: " << queue_array[FRONT] << "\n";
        //Cek jika antrian hanya memiliki satu elemen
        if (FRONT == REAR) {
            FRONT = -1;
            REAR = -1;
        }
        else {
            //jika elemen dihapus berada diposisi terakhir array,kembali ke awal
            if (FRONT == max - 1)
                FRONT = 0;
            else
                FRONT = FRONT + 1;
        }
    }
    void displa() {
        int FRONT_position = FRONT;
        int REAR_position = REAR;

        //cek apakah antrian kosong
        if (FRONT == -1) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "\nElementss in the queue are : \n";
        //jika front_position<=rear_position,iterasi dari Front hingga REAR
        if (FRONT_position <= REAR_position) {
            while (FRONT_position <= REAR_position) {
                cout << queue_array[FRONT_position] << "    ";
                FRONT_position++;
                cout << endl;
            }
        }
        else {
            //jika  front_position<=rear_position,iterasi dari Front hingga akhir array
            while (FRONT_position <= max - 1) {
                cout << queue_array[FRONT_position] << "   ";
                FRONT_position++;
            }
            FRONT_position = 0;
            //iterasi dari awal array hingga rear
            while (FRONT_position <= REAR_position) {
                cout << queue_array[FRONT_position] << "      ";
                FRONT_position++;
            }
            cout << endl;
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

