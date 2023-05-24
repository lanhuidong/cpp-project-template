namespace geometry {
    class Shap {
        public:
          virtual int area() = 0;
          virtual ~Shap() = default;
    };

    class Rectangle : public Shap {
        public:
          Rectangle(int width, int height);
          virtual int area();
          virtual ~Rectangle() = default;
        private:
            int m_width;
            int m_height;  
    };
}