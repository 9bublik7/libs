// Defining a one-sided list
template <typename T>
class OSList{
private:
    T item;
    OSList *next;
public:
    OSList* search(T item);
    void insert(T item);
    void delete(T item);
}
