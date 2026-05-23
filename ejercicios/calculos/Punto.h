class Punto 
{
    private:
        int x, y;
    public:
        //constructores
        Punto()
        {
            x = 0;
            y = 0;
        }
        Punto(int _x, int _y)
        {
            x = _x;
            y = _y;
        }
        //metodos
        int leer_x() const;
        int leer_y() const;
        void escribir_x(int punto_x);
        void escribir_y(int punto_y);
};