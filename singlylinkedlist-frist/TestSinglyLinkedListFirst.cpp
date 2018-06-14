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
class TestSinglyLinkedListFirst {
    Node *first;

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
    TestSinglyLinkedListFirst() {
        first = new Node;
    }

    /**
     * 头插入法
     * @param element 元素
     * @return
     */
    Node *add(int element) { //C.[head:1,next:&B] -> B.[head:0,next:&A] -> A.[head:NULL,next:NULL]
        auto *newFirst = new Node;
        newFirst->element = element;
        newFirst->next = first;
        first = newFirst;
    }

    /**
     * 循环
     */
    void forEach() {
        Node *node = first;
        while (node != NULL) {
            printf("%d\r\n", node->element);
            node = node->next;
        }
    }

    /**
     * 清除
     */
    void clear() {
        this->first = NULL;
    }
};

int main(int argc, char *argv[]) {
    auto *testSinglyLinkedListLast = new TestSinglyLinkedListFirst();
    testSinglyLinkedListLast->add(0);
    testSinglyLinkedListLast->add(1);
    testSinglyLinkedListLast->add(2);
    testSinglyLinkedListLast->forEach();

    testSinglyLinkedListLast->clear();


}