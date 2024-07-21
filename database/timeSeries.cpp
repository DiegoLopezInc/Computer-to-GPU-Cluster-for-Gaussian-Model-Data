#include <timescaledb.hpp>

int main() {
    // Connect to TimescaleDB
    timescaledb::TimescaleDB timescaledb("postgresql://localhost:5432/my_database");

    // Write data to TimescaleDB
    timescaledb.write("measurement_name")
        .field("field1", 42)
        .field("field2", "value")
        .tag("tag1", "tag_value")
        .tag("tag2", "tag_value")
        .timestamp(std::chrono::system_clock::now())
        .execute();

    // Query data from TimescaleDB
    auto result = timescaledb.query("SELECT * FROM measurement_name");

    // Process the query result
    for (const auto& row : result) {
        // Access fields and tags
        auto field1 = row["field1"].as<int>();
        auto field2 = row["field2"].as<std::string>();
        auto tag1 = row["tag1"].as<std::string>();
        auto tag2 = row["tag2"].as<std::string>();

        // Process the data
        // ...
    }

    return 0;
}
