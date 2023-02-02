#include <iostream>
#include <vector>

using namespace std;

int main() {

    //Задание вектора цен и вектора покупок
    vector<float> prices {3.6, 5.2, 3.8, 9.1, 5.3, 7.7};
    vector<int> purchases {5, 4, 1, 2, 1, 2, 0};

    //Чтение индексов покупок и вычисление стоимости всех покупок
    float total = 0.0;
    for (int i=0; i<purchases.size(); i++)
    {
        //Проверка, что индекс покупки не выходит за размер вектора цен
        if (purchases[i]<prices.size())
        {
            int index=purchases[i];
            total+=prices[index];
        }
        else cout << i << " index is not correct!" << endl;
    }
    cout << "Total cost: " << total << endl;
}
