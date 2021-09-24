#ifndef PARENT_H
#define PARENT_H
using namespace std;
/**
 * @brief 
 * 
 */
class parent
{
    protected:
    int n1, n2;

    public:
    /**
     * @brief Construct a new parent object
     * 
     */
    parent();
    /**
     * @brief Construct a new parent object
     * 
     * @param a 
     * @param b 
     */
    parent (int a, int b);
    /**
     * @brief Set the Values object
     * 
     */
    void setValues(int, int);
    /**
     * @brief 
     * 
     */
    virtual void printData();
    /**
     * @brief Destroy the parent object
     * 
     */
    ~parent();
        
};

#endif // PARENT_H