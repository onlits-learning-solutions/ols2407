
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public interface LooseCoupling {

    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost";
        String user = "ols2407";
        String password = "ols2407";
        Connection connection;
        try {
            connection = DriverManager.getConnection(url, user, password);
            System.err.println(connection);
        } catch (SQLException exception) {
            System.err.println(exception.getMessage());
        }
        System.out.println("Aal is well!");
    }
}