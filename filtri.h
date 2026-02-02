
#ifndef FILTRI_H
#define FILTRI_H

class filtro_generale {
    protected:
    int n;
    public:
    void show();
    virtual void filtra(int val);
};

class filtro_A: public filtro_generale{
    public:
    void filtra(int val) override;
};

class filtro_B: public filtro_generale{
    public:
    void filtra(int val) override;
};

class filtro_C: public filtro_generale{
    public:
    void filtra(int) override;
};

class filtro_D:public filtro_generale{
    public:
    void filtra(int) override;
};

class filtro_E: public filtro_generale{
    public:
    void filtra(int) override;
};

class filtro_F: public filtro_generale{
    public:
    void filtra(int) override;
};
#endif
