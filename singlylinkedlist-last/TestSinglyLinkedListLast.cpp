#include <cstdio>

/**
 * 节点
 */
struct Node {
    int element;
    Node *next;
};

/**
 * 测试单链表
 */
class TestSinglyLinkedListLast {
    Node *last;

private:

    /**
     * 递归
     * @param node 节点
     */
    void recursive(Node *node) {
        printf("%d", node->element);
        if (node->next != NULL) {
            recursive(node->next);
        }
    }

public:

    /**
     * 构造方法
     */
    TestSinglyLinkedListLast() {
        last = new Node;
    }

    /**
     * 尾插入法
     * @param element 元素
     * @return
     */
    Node *add(int element) {
        auto *newLast = new Node;
        newLast->element = element;
        last->next = newLast;
        last = newLast;
    }

    /**
     * 循环
     */
    void forEach() {
        recursive(last);
    }

    /**
     * 清除
     */
    void clear() {
        this->last = NULL;
    }
};

int main(int argc, char *argv[]) {
    auto *testSinglyLinkedListLast = new TestSinglyLinkedListLast();
    testSinglyLinkedListLast->add(0);
    testSinglyLinkedListLast->add(1);
    testSinglyLinkedListLast->add(2);
    testSinglyLinkedListLast->forEach();

    testSinglyLinkedListLast->clear();


}