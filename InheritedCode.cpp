class BadLengthException : public exception {
private:
    int length;
public:
    BadLengthException(int n) : length(n) {}
    const char* what() const noexcept override {
        stringstream ss;
        static string msg;
        ss << length;
        msg = ss.str();
        return msg.c_str();
    }
    int getLength() const { return length; }
};
