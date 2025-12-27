
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class AbstractFactory {
    public static void main(String[] args) throws SQLException {
        Connection connection = DriverManager.getConnection("jdbc:sqlserver://localhost");
        System.out.println(connection);
        Statement statement = connection.createStatement();
        System.out.print(statement);
    }
}