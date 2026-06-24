#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // 출력 정렬(setw, left)을 위한 헤더

// 부품 정보를 담는 구조체
struct Product {
    int id;
    std::string name;
    int quantity;
    int price;
};

// 재고 관리를 담당하는 클래스
class ProductManager {
private:
    std::vector<Product> products;

    // 내부에서만 사용하는 ID 검색 함수 (인덱스 반환, 없으면 -1)
    int findProductIndex(int id) const {
        for (size_t i = 0; i < products.size(); ++i) {
            if (products[i].id == id) {
                return static_cast<int>(i);
            }
        }
        return -1;
    }

    // 단일 부품 정보 출력
    void printProduct(const Product& p) const {
        std::cout << p.id << "\t" 
                  << std::left << std::setw(15) << p.name << "\t" 
                  << p.quantity << "개\t" 
                  << p.price << "원\n";
    }

public:
    // 생성자: 초기 데이터 세팅
    ProductManager() {
        products = {
            {1001, "타이어", 20, 120000},
            {1002, "와이퍼", 35, 15000},
            {1003, "엔진오일", 50, 35000},
            {1004, "배터리", 12, 90000},
            {1005, "브레이크패드", 25, 60000},
            {1006, "에어컨필터", 40, 18000},
            {1007, "전조등", 18, 45000}
        };
    }

    // 메뉴 출력
    void printMenu() const {
        std::cout << "\n==== 자동차 부품 재고 관리 프로그램 ====\n"
                  << "1. 전체 재고 조회\n"
                  << "2. 부품 검색\n"
                  << "3. 입고 처리\n"
                  << "4. 출고 처리\n"
                  << "5. 신규 부품 등록\n"
                  << "0. 종료\n"
                  << "메뉴 선택: ";
    }

    // 1. 전체 재고 조회
    void printAll() const {
        std::cout << "\nID\t부품명\t\t수량\t가격\n"
                  << "----------------------------------------\n";
        for (const auto& p : products) {
            printProduct(p);
        }
    }

    // 2. 부품 검색
    void searchProduct() const {
        int id;
        std::cout << "검색할 부품 ID 입력: ";
        std::cin >> id;

        int index = findProductIndex(id);
        if (index == -1) {
            std::cout << "해당 부품을 찾을 수 없습니다.\n";
        } else {
            std::cout << "\nID\t부품명\t\t수량\t가격\n"
                      << "----------------------------------------\n";
            printProduct(products[index]);
        }
    }

    // 3. 입고 처리
    void stockIn() {
        int id, amount;
        std::cout << "입고할 부품 ID 입력: ";
        std::cin >> id;

        int index = findProductIndex(id);
        if (index == -1) {
            std::cout << "해당 부품을 찾을 수 없습니다.\n";
            return;
        }

        std::cout << "입고 수량 입력: ";
        std::cin >> amount;

        if (amount <= 0) {
            std::cout << "입고 수량은 1개 이상이어야 합니다.\n";
            return;
        }

        products[index].quantity += amount;
        std::cout << "입고 처리가 완료되었습니다.\n"
                  << "현재 재고: " << products[index].quantity << "개\n";
    }

    // 4. 출고 처리
    void stockOut() {
        int id, amount;
        std::cout << "출고할 부품 ID 입력: ";
        std::cin >> id;

        int index = findProductIndex(id);
        if (index == -1) {
            std::cout << "해당 부품을 찾을 수 없습니다.\n";
            return;
        }

        std::cout << "출고 수량 입력: ";
        std::cin >> amount;

        if (amount <= 0) {
            std::cout << "출고 수량은 1개 이상이어야 합니다.\n";
            return;
        }

        if (products[index].quantity < amount) {
            std::cout << "재고가 부족합니다.\n"
                      << "현재 재고: " << products[index].quantity << "개\n";
            return;
        }

        products[index].quantity -= amount;
        std::cout << "출고 처리가 완료되었습니다.\n"
                  << "현재 재고: " << products[index].quantity << "개\n";
    }

    // 5. 신규 부품 등록
    void addProduct() {
        Product p;
        std::cout << "신규 부품 ID 입력: ";
        std::cin >> p.id;

        if (findProductIndex(p.id) != -1) {
            std::cout << "이미 존재하는 ID입니다.\n";
            return;
        }

        std::cout << "부품명 입력: ";
        std::cin >> p.name;

        std::cout << "재고 수량 입력: ";
        std::cin >> p.quantity;

        std::cout << "가격 입력: ";
        std::cin >> p.price;

        products.push_back(p); // 벡터 맨 뒤에 새 부품 추가
        std::cout << "신규 부품이 등록되었습니다.\n";
    }
};

int main() {
    // 빠른 입출력을 위한 설정
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    ProductManager manager;
    int choice;

    while (true) {
        manager.printMenu();
        std::cin >> choice;

        if (choice == 1) {
            manager.printAll();
        } else if (choice == choice == 2) {
            manager.searchProduct();
        } else if (choice == choice == 3) {
            manager.stockIn();
        } else if (choice == choice == 4) {
            manager.stockOut();
        } else if (choice == choice == 5) {
            manager.addProduct();
        } else if (choice == 0) {
            std::cout << "프로그램을 종료합니다.\n";
            break;
        } else {
            std::cout << "잘못된 메뉴입니다.\n";
        }
    }

    return 0;
}