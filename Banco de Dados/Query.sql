--create table
    create table Produtos
    (
    cod_produto number (2) primary key,
    nome_produto varchar (100) not null,
    marca_produto varchar (50) not null,
    cor_produto varchar (20),
    porcentagem_lucro_produto number(10),
    descricao_produto varchar (100)
    );

    create table Estoque
    (
    cod_estoque number (4) primary key,
    cod_produto number (2) references Produtos (cod_produto),
    quantidade_produto_estoque number (30) not null,
    valor_total_produto_estoque number (6,2) check(valor_total_produto_estoque > 0.00)
    );

    create table Fornecedores
    (
    cod_fornecedor number (6) primary key,
    nomefantasia_fornecedor varchar(50) not null,
    razaosocial_fornecedor varchar(50) not null,
    cnpj_fornecedor varchar(15) not null unique,
    endereco_fornecedor varchar(30),
    numero_fornecedor varchar(5),
    bairro_fornecedor varchar(15),
    cidade_fornecedor varchar(15),
    estado_fornecedor varchar(2),
    pais_fornecedor varchar(10),
    contato_fornecedor varchar(10),
    telefone_fornecedor varchar(11) not null,
    email_fornecedor varchar(50)
    );

    create table Clientes
    (
    cod_cliente number (1) primary key,
    nome_cliente varchar(50) not null,
    cnpj_cpf_cliente varchar(15) not null unique,
    endereco_cliente varchar(30),
    numero_cliente varchar(5),
    bairro_cliente varchar(15),
    cidade_cliente varchar(15),
    estado_cliente varchar(2),
    pais_cliente varchar(10),
    telefone_cliente varchar(11) not null,
    email_cliente varchar(50),
    observacao_cliente varchar(100)
    );

    create table Funcionarios
    (
    cod_funcionario number (2) primary key,
    nome_funcionario varchar(50) not null,
    funcao_funcionario varchar(15),
    cpf_funcionario varchar(11) not null unique,
    endereco_funcionario varchar(30),
    numero_funcionario varchar(5),
    bairro_funcionario varchar(15),
    cidade_funcionario varchar(15),
    estado_funcionario varchar(2),
    pais_funcionario varchar(10),
    telefone_funcionario varchar(11) not null,
    email_funcionario varchar(50),
    observacao_funcionario varchar(100)
    );

    create table Compras
    (
    cod_estoque number (4) references Estoque (cod_estoque),
    cod_fornecedor number (6) references Fornecedores (cod_fornecedor),
    cod_funcionario number (2) references Funcionarios (cod_funcionario),
    data_compra date not null,
    nota_fiscal_compra varchar(10),
    valor_total_compra number (6,2) check (valor_total_compra > 0.00)
    );

    create table Vendas
    (
    cod_estoque number (4) references Estoque (cod_estoque),
    cod_cliente number (1) references Clientes (cod_cliente),
    cod_funcionario number (2) references Funcionarios (cod_funcionario),
    data_venda date,
    nota_fiscal_venda varchar(10),
    valor_total_venda number (6,2) check (valor_total_venda > 0.00)
    );

--Insert
    insert into Produtos(cod_produto, nome_produto, marca_produto, cor_produto,
    porcentagem_lucro_produto, descricao_produto)
    values(01, 'Conjunto Luvas', 'Bompack', 'Branco', 10, 'Feito em Latex ImpermeávelDescartável');

    insert into Produtos(cod_produto, nome_produto, marca_produto, cor_produto,
    porcentagem_lucro_produto, descricao_produto)
    values(02, 'Conjunto Máscaras', 'Wiltex Plus', 'Preto', 20, 'Reutilizável-Não
    Descartável');

    insert into Produtos(cod_produto, nome_produto, marca_produto, cor_produto,
    porcentagem_lucro_produto, descricao_produto)
    values(03, 'Álcool em Gel','Asseptgel', 'Transparente', 30, 'Álcool 70% Antisséptico -
    420g');

    insert into Produtos(cod_produto, nome_produto, marca_produto, cor_produto,
    porcentagem_lucro_produto, descricao_produto)
    values(04, 'Sabonete', 'Francis', 'Rosa', 5, 'Seboato de sódio, palmistato de sódio,
    glicerina, fragrância, CI 74160, CI 77891');

    insert into Produtos(cod_produto, nome_produto, marca_produto, cor_produto,
    porcentagem_lucro_produto, descricao_produto)
    values(05, 'Conjunto Lenços Umidecidos', 'Huggies One&Done', 'Branco', 15 ,'Produto
    Antisséptico');

    insert into Produtos(cod_produto, nome_produto, marca_produto, cor_produto,
    porcentagem_lucro_produto, descricao_produto)
    values(06, 'Detergente', 'Limpol', 'Amarelo', 7, 'Detergente Líquido 5L Neutro');

    insert into Estoque(cod_estoque, cod_produto, quantidade_produto_estoque,
    valor_total_produto_estoque)
    values(111, 01, 25, 22.95);

    insert into Estoque(cod_estoque, cod_produto, quantidade_produto_estoque,
    valor_total_produto_estoque)
    values(222, 02, 9, 26.58);

    insert into Estoque(cod_estoque, cod_produto, quantidade_produto_estoque,
    valor_total_produto_estoque)
    values(333, 03, 17, 19.99);

    insert into Estoque(cod_estoque, cod_produto, quantidade_produto_estoque,
    valor_total_produto_estoque)
    values(444, 04, 38, 1.79); 

    insert into Estoque(cod_estoque, cod_produto, quantidade_produto_estoque,
    valor_total_produto_estoque)
    values(555, 05, 30, 29.99);

    insert into Estoque(cod_estoque, cod_produto, quantidade_produto_estoque,
    valor_total_produto_estoque)
    values(666, 06, 13, 14.37);

    insert into Fornecedores(cod_fornecedor, nomefantasia_fornecedor,
    razaosocial_fornecedor, cnpj_fornecedor, endereco_fornecedor,
    numero_fornecedor, bairro_fornecedor, cidade_fornecedor,
    estado_fornecedor, pais_fornecedor, contato_fornecedor,
    telefone_fornecedor, email_fornecedor)
    values(00001, 'Gel Alcoólico', 'Álcool Gel X Corona Industria Ltda',
    '123456789000123', 'R. das Canas', '123', 'Cana Alta', 'S Paulo',
    'SP', 'Brasil', 'William', '11922334455',
    'william.contato@gelalcoolico.com.br');

    insert into Fornecedores(cod_fornecedor, nomefantasia_fornecedor,
    razaosocial_fornecedor, cnpj_fornecedor, endereco_fornecedor,
    numero_fornecedor, bairro_fornecedor, cidade_fornecedor,
    estado_fornecedor, pais_fornecedor, contato_fornecedor,
    telefone_fornecedor, email_fornecedor)
    values(00002, 'Zé Limpinho', 'José Limpo ME', '012345678000151', 'Av.Estado',
    '456', 'Ipiranga', 'São Paulo', 'SP', 'Brasil', 'Maycon', '11940028922',
    'maycon.contato@JoseLimpoME');

    insert into Fornecedores(cod_fornecedor, nomefantasia_fornecedor,
    razaosocial_fornecedor, cnpj_fornecedor, endereco_fornecedor,
    numero_fornecedor, bairro_fornecedor, cidade_fornecedor,
    estado_fornecedor, pais_fornecedor, contato_fornecedor,
    telefone_fornecedor, email_fornecedor)
    values(00003, 'Full Faxina', 'Limpeza Completa Industria de Produtos Ltda',
    '024135680000111', 'R da Limpeza', '32', 'Vila do Pó', 'S Paulo',
    'SP', 'Brasil', 'Creusa', '11923561245', 'creusa@fullfaxina.com.br');

    insert into Clientes(cod_cliente, nome_cliente, cnpj_cpf_cliente, endereco_cliente,
    numero_cliente, bairro_cliente, cidade_cliente, estado_cliente,
    pais_cliente, telefone_cliente, email_cliente, observacao_cliente)
    values(001, 'Renato Penha', '54685500110', 'R da Uninove', '10',
    'Vergueiro', 'S Paulo', 'SP', 'Brasil', '11921548700',
    'renatopenha@ig.com.br', 'Professor de SQL');

    insert into Clientes(cod_cliente, nome_cliente, cnpj_cpf_cliente, endereco_cliente,
    numero_cliente, bairro_cliente, cidade_cliente, estado_cliente,
    pais_cliente, telefone_cliente, email_cliente, observacao_cliente)
    values(002, 'Henrique Morano Sites', '41555587430', 'R das Flores', '11',
    'Mooca', 'S Paulo', 'SP', 'Brasil', '11951648911',
    'henriquemorano@hotmail.com', 'Designer');

    insert into Clientes(cod_cliente, nome_cliente, cnpj_cpf_cliente, endereco_cliente,
    numero_cliente, bairro_cliente, cidade_cliente, estado_cliente,
    pais_cliente, telefone_cliente, email_cliente, observacao_cliente)
    values(003, 'Vitor Vitório', '24585485521', 'R do Metrô', 's/n', 'Centro',
    'S Paulo', 'SP', 'Brasil', '998995477',
    'vitorviror@uni9.edu.br', 'Jardineiro');

    insert into Funcionarios(cod_funcionario, nome_funcionario, funcao_funcionario,
    cpf_funcionario, endereco_funcionario, numero_funcionario, bairro_funcionario,
    cidade_funcionario, estado_funcionario, pais_funcionario, telefone_funcionario,
    email_funcionario, observacao_funcionario)
    values(12, 'Catarina Dbanks', 'Farmaceutico', '09207588809', 'Silva Bueno', 'TRÊS',
    'Ipiranga', 'São Paulo', 'SP', 'Brasil', '4002-8922', 'Catarina@gg.com',
    'Solteiro-Ensino Superior');

    insert into Funcionarios(cod_funcionario, nome_funcionario, funcao_funcionario,
    cpf_funcionario, endereco_funcionario, numero_funcionario, bairro_funcionario,
    cidade_funcionario, estado_funcionario, pais_funcionario, telefone_funcionario,
    email_funcionario, observacao_funcionario)
    values(14, 'Maria José Dbanks', 'Vendedora', '11429785176', 'Rua Tabajaras', 'UM',
    'Mooca', 'São Paulo', 'SP', 'Brasil', '98765-3210', 'MariaJose@gm.com.br',
    'Casada-Ensino Médio');

    insert into Funcionarios(cod_funcionario, nome_funcionario, funcao_funcionario,
    cpf_funcionario, endereco_funcionario, numero_funcionario, bairro_funcionario,
    cidade_funcionario, estado_funcionario, pais_funcionario, telefone_funcionario,
    email_funcionario, observacao_funcionario)
    values(16, 'Gustavo Dbanks', 'Caixa', '97621345833', 'Rua Bartolomeu Ferrero', 'DEZ',
    'Cerâmica', 'São Caetano', 'SP', 'Brasil', '95641-4440',
    'GustavoDbanks@one.com', 'Solteiro-Estudante');

    insert into Compras(cod_estoque, cod_fornecedor, cod_funcionario, data_compra,
    nota_fiscal_compra, valor_total_compra)
    values(111, 00001, 12, '10/oct/2010', '1234567', 50.32);

    insert into Compras(cod_estoque, cod_fornecedor, cod_funcionario, data_compra,
    nota_fiscal_compra, valor_total_compra)
    values(222, 00002, 14, '11/dec/2014', '2747934', 75.94);

    insert into Compras(cod_estoque, cod_fornecedor, cod_funcionario, data_compra,
    nota_fiscal_compra, valor_total_compra)
    values(333, 00003, 14, '21/aug/2020', '4823554', 100.00);

    insert into Vendas(cod_estoque, cod_cliente, cod_funcionario, data_venda,
    nota_fiscal_venda, valor_total_venda)
    values(111, 001, 12, '13/may/2019', '2434678', 200.65);

    insert into Vendas(cod_estoque, cod_cliente, cod_funcionario, data_venda,
    nota_fiscal_venda, valor_total_venda)
    values(222, 002, 14, '07/jan/2018', '2545435', 150.99);

    insert into Vendas(cod_estoque, cod_cliente, cod_funcionario, data_venda,
    nota_fiscal_venda, valor_total_venda)
    values(111, 003, 14, '29/sep/2019', '2434678', 92.50);

--Select
    select * from Produtos;
    select * from Estoque;
    select * from Fornecedores;
    select * from Clientes;
    select * from Funcionarios;
    select * from Compras;
    select * from Vendas;

--Drop Table
    drop table Produtos
    drop table Estoque
    drop table Fornecedores
    drop table Clientes
    drop table Funcionarios
    drop table Compras;
    drop table Vendas;