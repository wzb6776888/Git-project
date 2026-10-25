#include<iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.1415926;

    cout << "          欢迎使用几何计算程序          " << endl;
    cout << " 1. 求解圆的周长和面积" << endl;
    cout << " 2. 求解矩形的周长和面积（并判定是否为正方形）" << endl;
    cout << " 3. 求解立方体的体积和表面积" << endl;
    cout << "请输入整数 (1, 2 或 3) 来选择功能: ";

    cin >> choice;

    switch (choice) {
    case 1: {
        double radius, circumference, area;
        cout << "\n--- 您选择了计算圆 ---" << endl;
        cout << "请输入圆的半径: ";
        cin >> radius;

        if (radius < 0) {
            cout << "输入错误：半径不能为负数！" << endl;
            break;
        }

        circumference = 2 * PI * radius;
        area = PI * radius * radius;

        cout << "圆的周长为: " << circumference << endl;
        cout << "圆的面积为: " << area << endl;
        break;
    }

    case 2: {
        double length, width, perimeter, area;
        cout << "\n--- 您选择了计算矩形 ---" << endl;
        cout << "请输入矩形的长: ";
        cin >> length;
        cout << "请输入矩形的宽: ";
        cin >> width;

        if (length < 0 || width < 0) {
            cout << "输入错误：边长不能为负数！" << endl;
            break;
        }

        perimeter = 2 * (length + width);
        area = length * width;

        cout << "矩形的周长为: " << perimeter << endl;
        cout << "矩形的面积为: " << area << endl;

        if (length == width) {
            cout << "判定结果: 这是一个正方形。" << endl;
        }
        else {
            cout << "判定结果: 这是一个普通的矩形（不是正方形）。" << endl;
        }
        break;
    }

    case 3: {
        double side, volume, surface_area;
        cout << "\n--- 您选择了计算立方体 ---" << endl;
        cout << "请输入立方体的边长: ";
        cin >> side;

        if (side < 0) {
            cout << "输入错误：边长不能为负数！" << endl;
            break;
        }

        volume = side * side * side;
        surface_area = 6 * side * side;

        cout << "立方体的体积为: " << volume << endl;
        cout << "立方体的表面积为: " << surface_area << endl;
        break;
    }

    default:
        cout << "\n错误: 您输入的整数不在 1-3 范围内，程序退出。" << endl;
        break;
    }

    return 0;
}