## Resource Encapsulation ##

### Example ###
In the example, a class called "Notes" uses helper functions. to access variables that are declared private.  This ensures that
there is no non-authorized access to the private variables.
```c++
private:
        string Name;
        string content;
public:
    void editNote() {
            string newContent;
            getline(cin, newContent);
            this->content = newContent;
        }
        string getName() {
            return Name;
        }
        void printContent() {
            cout << endl << content << endl << endl;
        }
```


### Non-Example ###
In the non-example, helper functions are still available, but the variables are also declared public, meaning they can be
manipulated without the use of the helper functions, which is a possible avenue for an exploit.

```c++
public:
        string Name;
        string content;
```



###### Image Source ######
https://wiki.iotivity.org/_media/re/re-modules.png?w=600&tok=41006e