package ols2407.todoapp;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class Task {

    private int id;
    private String name;

    public Task() {
    }

    Task(int id, String name) {
        this.id = id;
        this.name = name;
    }

    boolean create() {
        try {
            Connection connection = DriverManager.getConnection("jdbc:mysql://localhost", "ols2407", "ols2407");
            System.out.println(connection);
            Statement statement = connection.createStatement();
        } catch (SQLException e) {
            System.out.println(e);
        }
        return true;
    }

    @Override
    public String toString() {
        return "Hello!";
    }
}
