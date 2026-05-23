class DiaAnyo
{
    private:
        int mes;
        int dia;
    public:
        DiaAnyo(int _dia, int _mes);
        void visualizar() const;
        /**
         * el argumento es un objeto de tipo DiaAnyo (es un fecha)
         * el & indica que se trabaja con el objeto original.
         * el const indica que no se va a modificar la fecha que se pase.
         */
        bool igual(const DiaAnyo& fecha) const;  
};