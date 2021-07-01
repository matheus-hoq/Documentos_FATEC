const Knex = require('knex')

exports.up = function(knex) {
    return knex.schema.createTable("pro_produtos", function(table){
        table.integer('pro_codigo').primary()
        table.string('pro_nome', 45).notNullable()
        table.integer('pro_quantidade').notNullable()
        table.text('pro_descricao', 200)
        table.integer('cat_codigo').notNullable()
        table.foreign('cat_codigo').references('for_id').inTable('cat_categoria')
        table.integer('pro_minimo').notNullable()
        table.integer('pro_maximo').notNullable()
    })    
};

exports.down = function(knex) {
    return knex.schema.dropTable("pro_produtos")
};
