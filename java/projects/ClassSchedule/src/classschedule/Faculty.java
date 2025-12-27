package classschedule;

public class Faculty {
    private int id;
    private String name;

    public Faculty() {
    }

    public Faculty(int id, String name) {
        this.id = id;
        this.name = name;
    }

    int getId() {
        return id;
    }

    void setName(String name) {
        this.name = name;
    }

    String getName() {
        return name;
    }
}


//POJO: Plain Old Java Objects