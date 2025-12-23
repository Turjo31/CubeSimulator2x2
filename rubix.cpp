#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> top = {{'w', 'w'}, {'w', 'w'}};
    vector<vector<char>> bottom = {{'y', 'y'}, {'y', 'y'}};
    vector<vector<char>> left = {{'b', 'b'}, {'b', 'b'}};
    vector<vector<char>> right = {{'o', 'o'}, {'o', 'o'}};
    vector<vector<char>> front = {{'r', 'r'}, {'r', 'r'}};
    vector<vector<char>> back = {{'g', 'g'}, {'g', 'g'}};

    int x = 1;

    while (x)
    {
        char a, b;
        cin >> a;
        cin >> b;
        if (a == 'u')
        {

            if (b == '1')
            {
                char f1 = front[0][1];
                char f2 = front[1][1];
                char t1 = top[0][1];
                char t2 = top[1][1];
                char ba1 = back[0][1];
                char ba2 = back[1][1];
                char b1 = bottom[0][1];
                char b2 = bottom[1][1];

                front[0][1] = b1;
                front[1][1] = b2;
                top[0][1] = f1;
                top[1][1] = f2;
                back[0][1] = t1;
                back[1][1] = t2;
                bottom[0][1] = ba1;
                bottom[1][1] = ba2;
            }
            else
            {
                char f1 = front[0][0];
                char f2 = front[1][0];
                char t1 = top[0][0];
                char t2 = top[1][0];
                char ba1 = back[0][0];
                char ba2 = back[1][0];
                char b1 = bottom[0][0];
                char b2 = bottom[1][0];

                front[0][0] = b1;
                front[1][0] = b2;
                top[0][0] = f1;
                top[1][0] = f2;
                back[0][0] = t1;
                back[1][0] = t2;
                bottom[0][0] = ba1;
                bottom[1][0] = ba2;
            }

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout << front[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (a == 'd')
        {
            if (b == '1')
            {
                char f1 = front[0][1];
                char f2 = front[1][1];
                char t1 = top[0][1];
                char t2 = top[1][1];
                char ba1 = back[0][1];
                char ba2 = back[1][1];
                char b1 = bottom[0][1];
                char b2 = bottom[1][1];

                front[0][1] = t1;
                front[1][1] = t2;
                top[0][1] = ba1;
                top[1][1] = ba2;
                back[0][1] = b1;
                back[1][1] = b2;
                bottom[0][1] = f1;
                bottom[1][1] = f2;
            }
            else
            {
                char f1 = front[0][0];
                char f2 = front[1][0];
                char t1 = top[0][0];
                char t2 = top[1][0];
                char ba1 = back[0][0];
                char ba2 = back[1][0];
                char b1 = bottom[0][0];
                char b2 = bottom[1][0];

                front[0][0] = t1;
                front[1][0] = t2;
                top[0][0] = ba1;
                top[1][0] = ba2;
                back[0][0] = b1;
                back[1][0] = b2;
                bottom[0][0] = f1;
                bottom[1][0] = f2;
            }

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout << front[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (a == 'r')
        {
            if (b == '1')
            {
                char f1 = front[1][0];
                char f2 = front[1][1];
                char r1 = right[1][0];
                char r2 = right[1][1];
                char ba1 = back[1][0];
                char ba2 = back[1][1];
                char l1 = left[1][0];
                char l2 = left[1][1];

                front[1][0] = l1;
                front[1][1] = l2;
                right[1][0] = f1;
                right[1][1] = f2;
                back[1][0] = r1;
                back[1][1] = r2;
                left[1][0] = ba1;
                left[1][1] = ba2;
            }
            else
            {
                char f1 = front[0][0];
                char f2 = front[0][1];
                char r1 = right[0][0];
                char r2 = right[0][1];
                char ba1 = back[0][0];
                char ba2 = back[0][1];
                char l1 = left[0][0];
                char l2 = left[0][1];

                front[0][0] = l1;
                front[0][1] = l2;
                right[0][0] = f1;
                right[0][1] = f2;
                back[0][0] = r1;
                back[0][1] = r2;
                left[0][0] = ba1;
                left[0][1] = ba2;
            }

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout << front[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (a == 'l')
        {
            if (b == '1')
            {
                char f1 = front[1][0];
                char f2 = front[1][1];
                char r1 = right[1][0];
                char r2 = right[1][1];
                char ba1 = back[1][0];
                char ba2 = back[1][1];
                char l1 = left[1][0];
                char l2 = left[1][1];

                front[1][0] = r1;
                front[1][1] = r2;
                left[1][0] = f1;
                left[1][1] = f2;
                back[1][0] = l1;
                back[1][1] = l2;
                right[1][0] = ba1;
                right[1][1] = ba2;
            }
            else
            {
                char f1 = front[0][0];
                char f2 = front[0][1];
                char r1 = right[0][0];
                char r2 = right[0][1];
                char ba1 = back[0][0];
                char ba2 = back[0][1];
                char l1 = left[0][0];
                char l2 = left[0][1];

                front[0][0] = r1;
                front[0][1] = r2;
                left[0][0] = f1;
                left[0][1] = f2;
                back[0][0] = l1;
                back[0][1] = l2;
                right[0][0] = ba1;
                right[0][1] = ba2;
            }

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout << front[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else
        {
            x = 0;
        }
    }

    return 0;
}