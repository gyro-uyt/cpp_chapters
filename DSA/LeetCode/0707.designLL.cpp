class MyLinkedList {
public:
  int size;
  struct Node {
    int val;
    Node *next;
    Node(int data) {
      val = data;
      next = nullptr;
    }
    Node(int data, Node *p) {
      val = data;
      next = p;
    }
  };
  Node *head;
  MyLinkedList() {
    size = 0;
    head = nullptr;
  }

  int get(int index) {
    if (index < 0 || index >= size)
      return -1;
    Node *temp = head;
    for (int i = 0; i < index; i++)
      temp = temp->next;
    return temp->val;
  }

  void addAtHead(int val) {
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
    size++;
  }

  void addAtTail(int val) {
    if (head == nullptr) {
      head = new Node(val);
    } else {
      Node *temp = head;
      while (temp->next != nullptr)
        temp = temp->next;
      temp->next = new Node(val);
    }
    size++;
  }

  void addAtIndex(int index, int val) {
    if (index < 0 || index > size)
      return;
    if (index == 0) {
      addAtHead(val);
      return;
    }
    if (index == size) {
      addAtTail(val);
      return;
    }
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
      temp = temp->next;
    Node *mid = new Node(val);
    mid->next = temp->next;
    temp->next = mid;
    size++;
  }

  void deleteAtIndex(int index) {
    if (index < 0 || index >= size)
      return;
    if (index == 0) {
      Node *del = head;
      head = head->next;
      delete del;
    } else {
      Node *temp = head;
      for (int i = 0; i < index - 1; i++)
        temp = temp->next;
      Node *del = temp->next;
      temp->next = temp->next->next;
      delete del;
    }
    size--;
  }
};
