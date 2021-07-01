// Update with your config settings.

module.exports = {

  development: {
    client: 'mysql',
    connection: {
      host: 'localhost',
      user: 'root',
      password: 'root',
      database: 'fotosig'
    },    
      migrations: {
      tableName: 'knex_migrations',
      directory: `${__dirname}/src/database/migrations`
      }    
  },
};
