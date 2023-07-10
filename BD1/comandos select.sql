                        -- Comandos Sele��o (Select)  BETWEEN - IN  - LIKE - AGRUPAMENTO
/*
*/
use ALUNO_F17
/*
sp_help

slect * from clientes

select cod_cli, nome,salario from clientes where salario < 5000.00

Condi��es de pesquisa

Como vimos, a cl�usula WHERE permite selecionar quais as linhas da tabela a serem inclu�das no resultado.
Existem v�rias formas de montar uma cl�usula WHERE, usando um dos seguintes elementos:

Operadores de compara��o 	

=	igual a 
>	maior que 
<	menor que 
>= ou !<	maior ou igual (n�o menor) 
<= ou !>	menor ou igual (n�o maior) 
<> ou != 	diferente 


--Usando faixas   -- BETWEEN

Onde BETWEEN...AND... seleciona os registros cujos valores est�o dentro de uma determinada faixa.
                      Para fazer o contr�rio, bastaria usar NOT BETWEEN (mas nesse caso a consulta n�o � t�o eficiente).
use aluno_f200

*/
sp_help produtos



-- Para buscarmos os pre�os dos produtos que custam entre 10 e 30 reais, poder�amos fazer o seguinte:

select valor_PRODUTO FROM PRODUTOS

Select * from Produtos where preco >= 10 and preco <= 30

OU

Select * from Produto where preco between 10 and 30

-------------------------------------------------------------------------------------------

/*
Obs.: Os Extremos s�o inclusos na condi��o.


Usando listas -- IN (LISTA)


 Voc� pode selecionar valores de acordo com uma lista.
 Se o valor pertence � lista, a linha ser� inclu�da no resultado.
 Suponha que voc� precise selecionar as empresas que tenham c�digo 1,3,4,5,6 e 9. 
 
 (Repare: isto n�o quer dizer que as empresas est�o cadastradas, mas se elas estiverem, 
  elas ser�o inclusas no resultado final.)

select * from Empresa where codempresa in (1,3,4,5,6,9) 

  Esta consulta seria o equivalente a fazer:
   select * from Empresa where codempresa = 1 or codempresa=3 or codempresa = 4 or codempresa=5 or  
    codempresa=6 or codempresa=9

     


 Ou ainda:
 
    where (codempresa between 1 and 6) AND NOT (codempresa=2) OR codempresa = 9

  Nota :
   1)  Uma consulta SQL pode ser realizada de v�rias formas, basta observar que umas s�o mais eficientes que as outras.

 2)   Para retornar os valores que n�o est�o na lista, pode-se usar NOT IN.

 */



/*
--TESTE IN 

SELECT * FROM FUNCIONARIOS WHERE COD_DEPTO = 2 OR COD_DEPTO = 3

SELECT * FROM FUNCIONARIOS WHERE COD_DEPTO IN (2,3)


  PADR�O   LIKE

  

O operador LIKE [como] faz casamento de padr�es. Um padr�o � uma string contendo
caracteres que podem ser combinados com parte de outra string.
 
 OS CARACTERES:
    %  (PERCENTAGEM) : Representar qualquer quantidade de caracteres a partir do caraceter %. 
    _  (SUBLINHADO)  : Combinar com um �nico caractere na posi��o do _. 
   [ ] (COLCHETE )   : Combinar com uma determinada faixa de caracteres dentro do Colchete.
   
   Obs.: O caractere ^ (not)  --> indica n�o).
 
 
 Exemplos:
 para obter todas as pessoas que tenham nome come�ando com 'Maria', podemos fazer:
*/

USE TESTE

select * from pessoas where nome like 'Maria%'

 --Para pegar todas as pessoas que tenham o nome 'Silva' no final, basta fazer:

select * from Pessoa where nome like '%Silva'

Note: que se voc� n�o colocar o espa�o antes do 'Silva', voc� trar� resultados que n�o condizem com a consulta:
 
  
Por exemplo, se nos seus dados existem pessoas com nome 'Sousa' ou 'Souza', voc� pode usar: LIKE '%sou_a%'.
   
  Nota :
       Pessoas cadastradas com 'Soula', ou qualquer outra letra no lugar do "_".
 

  Exemplo:
  
  
  LIKE '[CK]%' encontra os nomes que iniciam com C ou K e LIKE '[A-E]%' os que come�am com as letras de A at� E.
  
   Obs.: O caractere ^ --> indica n�o).
  
  LIKE '[^V]%' encontra os nomes que N�O  come�am com V 

 Para exemplificar, procurar as pessoas que tenhas 'Souza' ou 'Sousa', apenas no MEIO do nome. Para isto, podemos fazer:

Select * from Pessoa where nome like '%Sou[sz]a%'

  As compara��es feitas com LIKE dependem da ordem de classifica��o [sort order] escolhida durante a instala��o do SQL Server.
 Se foi usada a ordem "accent-insensitive", ele consegue procurar ignorando acentos. Por  
  exemplo, LIKE 'camara' vai encontrar tamb�m 'C�mara'.





-- �rea Teste

  -- Abrir o Banco de Dados TESTE 
  
--DROP DATABASE TESTE1
  
 -- create database teste1
  
  -- use teste1
   
 -- drop table departamentos

 -- drop table funcionarios 

  -- Criar as tabelas 
  
        Create Table Departamentos
        (
          Cod_Depto    int,
          Departamento char(25),
         constraint PK_Departamentos Primary key (cod_Depto)
         )                 
sp_help        
select * from departamentos

insert into Departamentos values (1,'Rela��es Humanas')               
insert into Departamentos values (2,'Departamento Pessoal')               
insert into Departamentos values (3,'Inform�tica')               
insert into Departamentos values (4,'Diretoria')               


         Create table Funcionarios
         (
           Cod_Matricula   Varchar(10),
           Nome_funcionario Varchar(35),
           Cod_Depto        Int,
           Salario          smallmoney,
           Constraint PK_Funcionarios  primary key (cod_matricula),
           Constraint FK_Depto  foreign key(cod_depto) references departamentos(cod_depto)
            )
            
insert into Funcionarios values ('902001','Felipe Lima',1,7700.00)

insert into Funcionarios values ('902002','Matheus Duarte Oliveira',1,7000.00)
insert into Funcionarios values ('902003','Margarida das Rosas Ono',1,7500.00)
insert into Funcionarios values ('902004','Graziella Anjos Oliveira',1,5000.00)
insert into Funcionarios values ('902005','Rogerio Farias Batiston',1,5500.00)
insert into Funcionarios values ('902006','Guilherme Miranda Campos',1,6500.00)
insert into Funcionarios values ('902007','Rodrigo Genery Pires',1,15000.00)
insert into Funcionarios values ('902008','Marcelo Marins Loopes',1,10000.00)
insert into Funcionarios values ('902009','Douglas Souto Lima',1,15000.00)
                        

insert into Funcionarios values ('90101','Andressa Duarte Reis',2,5700.00)
insert into Funcionarios values ('90102','Maria Alino Baluina da Costa',2,7000.00)
insert into Funcionarios values ('90103','Leonardo Gon�alves Araujo',2,7500.00)
insert into Funcionarios values ('90104','Estafane Salgado Pena',2,600.00)
insert into Funcionarios values ('90105','Ana Ribeiro Freitas',2,3000.00)
insert into Funcionarios values ('90106','Camila Mariano',2,3000.00)


insert into Funcionarios values ('90010','Alexandre Mello Junior',3,3500.00)
insert into Funcionarios values ('90020','Camila Lima da Costa',3,10500.00)
insert into Funcionarios values ('90030','Beth Carvalho',3,7500.00)
insert into Funcionarios values ('90040','Lucas Silva Ferreira',3,8500.00)
insert into Funcionarios values ('90050','Bela Izza Lopes da Cruz',3,2500.00)
insert into Funcionarios values ('90060','Clarice Sousa Mello ',3,3500.00)

            
insert into Funcionarios values ('90001','Marcio Santos',4,35700.00)
insert into Funcionarios values ('90002','Amanda de Souza Gagalhardi',4,37000.00)
insert into Funcionarios values ('90003','Bruno Santiago',4,17500.00)
insert into Funcionarios values ('90004','Ana Paula Fran�a',4,5000.00)
insert into Funcionarios values ('90005','Lorena Regina Paula da Silva',4,5000.00)
insert into Funcionarios values ('90006','Margarida Branca de Souza',4,5000.00)

sp_help funcionarios

select cod_matricula as 'codigo', nome_funcionario as 'nome', salario, Salario * 1.10 as  'aumento'
from funcionarios where salario > 9000 and Cod_Depto = '4'

select * from funcionarios

 
 -- Teste Between
 

-- use teste1

select * from Funcionarios where Salario >= 30000 and Salario <= 60000

select * from Funcionarios where Salario between  30000 and  60000

 
 -- Selecionar todos os dados dos funcionarios com salario de R$ 6000,00 at� R$ 15000.00
 
 SELECT * FROM FUNCIONARIOS WHERE SALARIO >=6000 AND SALARIO <=15000 
 order by Salario asc 
 
 select * from Funcionarios where salario between 6000 and 15000 order by Salario ASC
 
 
 -- Selecionar todos os dados dos funcionarios com salario de R$ 15000,00 at� R$ 50000.00
 
 select * from Funcionarios where salario between 15000 and 50000 
 
  
  -- teste In
  
  -- Selecionar os cod_matricula e nome e codigo do depto dos   funcionarios do depto 1, 2, e 4
  
   select cod_matricula, nome_funcionario, cod_depto from Funcionarios 
   where Cod_Depto  = 1 or cod_depto = 2 or cod_depto = 4 order by cod_depto
  
  select cod_matricula, nome_funcionario, cod_depto from Funcionarios 
  where Cod_Depto in(1,2,4) order by cod_depto   
 
 
 
  -- Selecionar os cod_matricula ,nome, codigo do depto e salario dos   funcionarios do depto 1 e 4 com salario maior que R$ 7000.00
 
 select cod_matricula, nome_funcionario, cod_depto,Salario  from Funcionarios  
 where Cod_Depto in(1,4) and Salario > 7000 order by Cod_Depto 
 
 
 -- selecionar nome dos funcionarios com salario entre R$ 1500.00 e R$ 4000.00 do Depto 2 e 3 
 
  
  select  nome_funcionario,Cod_Depto,salario from Funcionarios
  where (salario between 1500 and 4000) and (Cod_Depto in(2,3))
  
  -- teste like
  
   -- Selecionar todos os dados dos funcionarios que come�am com o 'A'

USE OSIAS
   
   select  * from Funcionarios where nome_funcionario like 'A%'
   
   
   select  * from Funcionarios where nome_funcionario like '%A'
   

   -- Selecionar os funcion�rios que tenham '
   
   select * from Funcionarios where Nome_funcionario like '%Sou_a%'

   


   -- Selecionar todos os dados dos funcionarios que come�am com o 'An'
   
   select  * from Funcionarios where nome_funcionario like 'An%'
   
  
  -- Selecionar todos os dados dos funcionarios que terminam com o 'A'
   
   select  * from Funcionarios where nome_funcionario like '%a'
   
    
  
  -- Selecionar os funcionarios que terminam com o 'S'
  
    select  * from Funcionarios where nome_funcionario like '%s'
    
    
  -- Selecionar os funcionarios que tenha  'S' em qualquer posi��o do nome
  
    select  * from Funcionarios where nome_funcionario like '%s%'
    
    
  -- Selecionar os funcionarios que tenha  'S' em qualquer posi��o do nome e iniciam com  'A'
  
    select  * from Funcionarios where nome_funcionario like 'A%s%'
    
    -- Selecionar todos os dados dos funcionarios que come�am com A at� C em ordem alfab�tica
    
    select  * from Funcionarios where nome_funcionario like '[A-C]%' order by Nome_funcionario asc
  
  
  -- Selecionar todos os dados dos funcionarios que come�am com A at� D dos depto 2 por ordem descrescente de sal�rio
  
     select  * from Funcionarios where nome_funcionario like '[A-D]%' AND  Cod_Depto = 2 order by Salario ASC  
  
  -- Selecionar os funcionarios que come�am com A at� D dos com salario maior que R$ 560.00

 select  * from Funcionarios where nome_funcionario like '[A-D]%' AND  Salario > 560.00



-- Selecionar o nome, salario, salario com acr�scimo de 15% e o depto dos funcionarios 

--    cujo nome coma�am com 'Mar' do depto  1 e 4  e salario maior ou igual a R$ 750.00 e menor ou igual R$ 15000.00 

 select nome_funcionario,salario, cod_depto from funcionarios 
         where nome_funcionario like 'mar%' and cod_depto in(1,4) and salario between 750.00 and 15000.00 order by cod_depto desc



                                cl�usulas GROUP BY e HAVING:

COUNT(expr) Conta quantos valores existem da express�o dada dentro do grupo (se expr for NULL para uma linha, a linha n�o � inclu�da na contagem). 
COUNT(*) 	Conta quantas linhas existem dentro do grupo. 
MAX(expr) 	Retorna o m�ximo valor de expr dentro do grupo. 
MIN(expr) 	Retorna o m�nimo valor de expr dentro do grupo. 
SUM(expr) 	Retorna o somat�rio da express�o dentro do grupo. 
AVG(EXPR)   Retorna a M�dia Aritm�tica da express�o dentro do grupo

select count(*) as 'qtde' from funcionarios

       As fun��es AVG e SUM podem ser usadas apenas com dados num�ricos.
       As outras podem ser usadas com qualquer tipo de coluna.
       As fun��es SUM, AVG e COUNT(expr) permitem  especificar tamb�m o operador DISTINCT, que indica para
       considerar apenas os valores distintos.



Sintaxe
SELECT lista_de_colunas FROM lista_de_tabelas WHERE condi��es GROUP BY lista_de_express�es 
HAVING condi��o


Condi��es 
          A cl�usula WHERE (se presente) separa as linhas que satisfazem as condi��es iniciais.
          A cl�usula GROUP BY organiza as linhas de resultado em grupos de acordo com os valores das express�es
          informadas. A cl�usula HAVING (opcional) seleciona os grupos de acordo com os resultados.

      O resultado do SELECT...GROUP BY... tem uma linha para cada grupo, que pode conter valores de resumo (somat�rio, m�dia, contagem etc.) calculados dentro do grupo.

Quando o GROUP BY est� presente, � poss�vel usar fun��es agregadas, que calculam valores baseado nas linhas de um grupo e geram valores de resumo.
Fun��es agregadas
Al�m da fun��o COUNT, existem outras fun��es agregadas que podem ser usadas para fazer opera��es sobre os elementos do grupo:
AVG (expr) 	Calcula o valor m�dio da express�o expr dentro do grupo. A express�o pode ser um nome de coluna ou calculada a partir de colunas e/ou constantes.


    (Por exemplo, AVG (salario*1.1)
 
 sp_help
Exemplos:
Para saber o n�mero de pessoas que existem na tabela Pessoa, podemos fazer:
Select count(*) from Pessoas

Agora para sabermos o n�mero de pessoas que cadastraram um telefone de fax, podemos fazer:
Select count(FAX) from Pessoas

Ou seja, count(*) retorna todas as linhas, e count(fax) retorna somente as linhas n�o-nulas da coluna fax.

Para sabermos qual a m�dia de pre�os dos produtos, podemos fazer:
Select avg(Preco) as "M�dia de Pre�os" from Produto

Para sabermos qual � o produto mais caro e o produto mais barato, podemos fazer:
Select Max(Preco) as "Mais Caro",Min(Preco) as "Mais Barato" from Produto

Para sabermos qual a quantidade total de produtos em estoque, podemos fazer:
Select SUM(QuantDisponivel) as "Total de Produtos" from Produto




Detalhes do GROUP BY

A cl�usula GROUP BY agrupa valores baseado em uma ou mais colunas. Geralmente quando usamos a GROUP BY, devemos utilizar uma das fun��es de agrega��o mostradas anteriormente.
 
 As colunas de resultado da cl�usula SELECT (a lista de colunas ap�s o SELECT) podem ser apenas:
�	Uma coluna presente na lista do GROUP BY OU
�	 Um valor gerado por uma fun��o agregada
�	 Outras colunas n�o podem ser inclu�das no resultado, porque teriam valores diferentes para cada linha do
      grupo.


  Exemplos:
   Para sabermos quantas pessoas existem em cada categoria, podemos fazer:
Select codcategoria, count(*) as "Total de Pessoas" from RelPessoaCategoria   group by CodCategoria


  Para sabermos quantas movimenta��es foram feitas para cada produto, podemos fazer:
Select CodProduto, Count(*) as "Total"  from MovimentacaoProduto Where TIPOMOV='S' group by Codproduto

Para sabermos qual o �ltima vez que cada produto foi vendido, podemos fazer:

Select CodProduto, max(datamov) from MovimentacaoProduto where TIPOMOV='S'
group by codproduto

Para sabermos a quantidade total comprada por produto, podemos fazer:
Select CodProduto, sum(quantidade) from MovimentacaoProduto where tipomov='S'
Group by CODPRODUTO

Para obtermos a quantidade total vendida por produto no m�s de maio de 2010, em ordem crescente por quantidade, podemos fazer:
Select Codproduto, sum(quantidade) from MovimentacaoProduto where tipomov='s' and (datamov between '05/01/10' and '06/01/10') group by codproduto order by sum(quantidade)


Usando a cl�usula HAVING
Ap�s feito o agrupamento, pode-se usar a cl�usula HAVING para selecionar quais os grupos a serem inclu�dos no resultado.

   Exemplo:
     Para sabermos qual o total de sa�das obtidas para cada produto, sendo que desejamos visualizar apenas os totais de sa�das maiores que 50 unidades, podemos fazer:
 Select CodProduto, sum(quantidade)from MovimentacaoProduto where tipomov='S'
Group by CODPRODUTO having sum(quantidade)>50

Note:
  1)  As cl�usulas WHERE e HAVING s�o semelhantes, mas WHERE seleciona as linhas da tabela que ir�o participar da gera��o do resultado.
   Essas linhas ser�o agrupadas e depois HAVING � aplicado ao resultado de cada grupo, para saber quais grupos v�o aparecer no resultado.
  2)  Nas condi��es usadas por HAVING s� podem aparecer valores que sejam os mesmos em todos os elementos do grupo.




-- TESTE DE AGRUPAMENTO

-- Selecionar a quantidade de funcion�rios da empresa

SELECT * FROM Funcionarios 
 
   select COUNT(*) as 'Qtde Funcion�rios' from funcionarios
   
   select COUNT(Cod_matricula) from funcionarios

-- Selecionar a quantidade de funcion�rios da empresa com salario  maior que R$ 5000.00
   
   select COUNT(*) as 'Qtde Funcionarios' from funcionarios where Salario > 5000.00
   
   -- Selecionar a m�dia de salario da empresa
   
   select avg(salario) as 'M�dia de Sal�rio' from funcionarios  
   
   
   
   -- Selecionar a m�dia de salario da empresa do depto 4
   
   select avg(salario) as 'M�dia de Sal�rio' from funcionarios 
   where Cod_Depto = 4
   
   
   -- Selecionar o maior sal�rio da empresa 
   
   select max(salario) as 'Maior Sal�rio' from funcionarios
   

   select nome_funcionario, MAX(salario)  from  Funcionarios 
   group by nome_funcionario
   
   select MAX(salario),cod_depto  from  Funcionarios 
   group by cod_depto

   sp_help funcionarios
   
   -- Selecionar o menor sal�rio da empresa 
   
   select min(salario) as 'Menor Sal�rio' from funcionarios
   
   
   -- Selecionar o menor sal�rio da empresa do depto 3
   
    select min(salario) as 'Menor Sal�rio' from funcionarios  
	where cod_depto = 3
   
   
   
    -- Selecionar o maior sal�rio da empresa de cada depto agrupando por depto
   
      select max(salario) as 'Maior Sal�rio',cod_depto  from funcionarios
	  group by cod_depto
   
   select max(salario) as 'Maior Sal�rio',cod_depto  from funcionarios 
   where cod_depto =2 group by cod_depto
   
   select max(salario) as 'Maior Sal�rio',cod_depto  from funcionarios 
   group by cod_depto having cod_depto = 2
   
    -- Selecionar o total de salarios pago por depto 
   
   select sum(salario) as 'Total',cod_depto  from funcionarios 
   group by cod_depto
   
   
   -- Selecionar o total de  salarios pago por pelo depto 2
     
                                                                            
      select sum(salario) as 'Total' ,cod_depto  from funcionarios group by cod_depto having cod_depto = 2
   
   
      
      select sum(salario) as 'Total'  from funcionarios WHERE cod_depto = 2
      
     select cod_depto, sum(salario) as 'Total'  from funciona                        -- Comandos Sele��o (Select)  BETWEEN - IN  - LIKE - AGRUPAMENTO
/*

use osias

sp_help

slect * from clientes

select cod_cli, nome,salario from clientes where salario < 5000.00

Condi��es de pesquisa

Como vimos, a cl�usula WHERE permite selecionar quais as linhas da tabela a serem inclu�das no resultado.
Existem v�rias formas de montar uma cl�usula WHERE, usando um dos seguintes elementos:

Operadores de compara��o 	

=	igual a 
>	maior que 
<	menor que 
>= ou !<	maior ou igual (n�o menor) 
<= ou !>	menor ou igual (n�o maior) 
<> ou != 	diferente 


--Usando faixas   -- BETWEEN

Onde BETWEEN...AND... seleciona os registros cujos valores est�o dentro de uma determinada faixa.
                      Para fazer o contr�rio, bastaria usar NOT BETWEEN (mas nesse caso a consulta n�o � t�o eficiente).
use aluno_f200

*/
sp_help produtos



-- Para buscarmos os pre�os dos produtos que custam entre 10 e 30 reais, poder�amos fazer o seguinte:

select valor_PRODUTO FROM PRODUTOS

Select * from Produtos where preco >= 10 and preco <= 30

OU

Select * from Produto where preco between 10 and 30

-------------------------------------------------------------------------------------------

/*
Obs.: Os Extremos s�o inclusos na condi��o.


Usando listas -- IN (LISTA)


 Voc� pode selecionar valores de acordo com uma lista.
 Se o valor pertence � lista, a linha ser� inclu�da no resultado.
 Suponha que voc� precise selecionar as empresas que tenham c�digo 1,3,4,5,6 e 9. 
 
 (Repare: isto n�o quer dizer que as empresas est�o cadastradas, mas se elas estiverem, 
  elas ser�o inclusas no resultado final.)

select * from Empresa where codempresa in (1,3,4,5,6,9) 

  Esta consulta seria o equivalente a fazer:
   select * from Empresa where codempresa = 1 or codempresa=3 or codempresa = 4 or codempresa=5 or  
    codempresa=6 or codempresa=9

     


 Ou ainda:
 
    where (codempresa between 1 and 6) AND NOT (codempresa=2) OR codempresa = 9

  Nota :
   1)  Uma consulta SQL pode ser realizada de v�rias formas, basta observar que umas s�o mais eficientes que as outras.

 2)   Para retornar os valores que n�o est�o na lista, pode-se usar NOT IN.

 */



/*
--TESTE IN 

SELECT * FROM FUNCIONARIOS WHERE COD_DEPTO = 2 OR COD_DEPTO = 3

SELECT * FROM FUNCIONARIOS WHERE COD_DEPTO IN (2,3)


  PADR�O   LIKE

  

O operador LIKE [como] faz casamento de padr�es. Um padr�o � uma string contendo
caracteres que podem ser combinados com parte de outra string.
 
 OS CARACTERES:
    %  (PERCENTAGEM) : Representar qualquer quantidade de caracteres a partir do caraceter %. 
    _  (SUBLINHADO)  : Combinar com um �nico caractere na posi��o do _. 
   [ ] (COLCHETE )   : Combinar com uma determinada faixa de caracteres dentro do Colchete.
   
   Obs.: O caractere ^ (not)  --> indica n�o).
 
 
 Exemplos:
 para obter todas as pessoas que tenham nome come�ando com 'Maria', podemos fazer:
*/

USE TESTE

select * from pessoas where nome like 'Maria%'

 --Para pegar todas as pessoas que tenham o nome 'Silva' no final, basta fazer:

select * from Pessoa where nome like '%Silva'

Note: que se voc� n�o colocar o espa�o antes do 'Silva', voc� trar� resultados que n�o condizem com a consulta:
 
  
Por exemplo, se nos seus dados existem pessoas com nome 'Sousa' ou 'Souza', voc� pode usar: LIKE '%sou_a%'.
   
  Nota :
       Pessoas cadastradas com 'Soula', ou qualquer outra letra no lugar do "_".
 

  Exemplo:
  
  
  LIKE '[CK]%' encontra os nomes que iniciam com C ou K e LIKE '[A-E]%' os que come�am com as letras de A at� E.
  
   Obs.: O caractere ^ --> indica n�o).
  
  LIKE '[^V]%' encontra os nomes que N�O  come�am com V 

 Para exemplificar, procurar as pessoas que tenhas 'Souza' ou 'Sousa', apenas no MEIO do nome. Para isto, podemos fazer:

Select * from Pessoa where nome like '%Sou[sz]a%'

  As compara��es feitas com LIKE dependem da ordem de classifica��o [sort order] escolhida durante a instala��o do SQL Server.
 Se foi usada a ordem "accent-insensitive", ele consegue procurar ignorando acentos. Por  
  exemplo, LIKE 'camara' vai encontrar tamb�m 'C�mara'.





-- �rea Teste

  -- Abrir o Banco de Dados TESTE 
  
--DROP DATABASE TESTE1
  
 -- create database teste1
  
  -- use teste1
   
 -- drop table departamentos

 -- drop table funcionarios 

  -- Criar as tabelas 
  
        Create Table Departamentos
        (
          Cod_Depto    int,
          Departamento char(25),
         constraint PK_Departamentos Primary key (cod_Depto)
         )                 
sp_help        
select * from departamentos

insert into Departamentos values (1,'Rela��es Humanas')               
insert into Departamentos values (2,'Departamento Pessoal')               
insert into Departamentos values (3,'Inform�tica')               
insert into Departamentos values (4,'Diretoria')               


         Create table Funcionarios
         (
           Cod_Matricula   Varchar(10),
           Nome_funcionario Varchar(35),
           Cod_Depto        Int,
           Salario          smallmoney,
           Constraint PK_Funcionarios  primary key (cod_matricula),
           Constraint FK_Depto  foreign key(cod_depto) references departamentos(cod_depto)
            )
            
insert into Funcionarios values ('902001','Felipe Lima',1,7700.00)

insert into Funcionarios values ('902002','Matheus Duarte Oliveira',1,7000.00)
insert into Funcionarios values ('902003','Margarida das Rosas Ono',1,7500.00)
insert into Funcionarios values ('902004','Graziella Anjos Oliveira',1,5000.00)
insert into Funcionarios values ('902005','Rogerio Farias Batiston',1,5500.00)
insert into Funcionarios values ('902006','Guilherme Miranda Campos',1,6500.00)
insert into Funcionarios values ('902007','Rodrigo Genery Pires',1,15000.00)
insert into Funcionarios values ('902008','Marcelo Marins Loopes',1,10000.00)
insert into Funcionarios values ('902009','Douglas Souto Lima',1,15000.00)
                        

insert into Funcionarios values ('90101','Andressa Duarte Reis',2,5700.00)
insert into Funcionarios values ('90102','Maria Alino Baluina da Costa',2,7000.00)
insert into Funcionarios values ('90103','Leonardo Gon�alves Araujo',2,7500.00)
insert into Funcionarios values ('90104','Estafane Salgado Pena',2,600.00)
insert into Funcionarios values ('90105','Ana Ribeiro Freitas',2,3000.00)
insert into Funcionarios values ('90106','Camila Mariano',2,3000.00)


insert into Funcionarios values ('90010','Alexandre Mello Junior',3,3500.00)
insert into Funcionarios values ('90020','Camila Lima da Costa',3,10500.00)
insert into Funcionarios values ('90030','Beth Carvalho',3,7500.00)
insert into Funcionarios values ('90040','Lucas Silva Ferreira',3,8500.00)
insert into Funcionarios values ('90050','Bela Izza Lopes da Cruz',3,2500.00)
insert into Funcionarios values ('90060','Clarice Sousa Mello ',3,3500.00)

            
insert into Funcionarios values ('90001','Marcio Santos',4,35700.00)
insert into Funcionarios values ('90002','Amanda de Souza Gagalhardi',4,37000.00)
insert into Funcionarios values ('90003','Bruno Santiago',4,17500.00)
insert into Funcionarios values ('90004','Ana Paula Fran�a',4,5000.00)
insert into Funcionarios values ('90005','Lorena Regina Paula da Silva',4,5000.00)
insert into Funcionarios values ('90006','Margarida Branca de Souza',4,5000.00)

sp_help funcionarios

select cod_matricula as 'codigo', nome_funcionario as 'nome', salario, Salario * 1.10 as  'aumento'
from funcionarios where salario > 9000 and Cod_Depto = '4'

select * from funcionarios

 
 -- Teste Between
 

-- use teste1

select * from Funcionarios where Salario >= 30000 and Salario <= 60000

select * from Funcionarios where Salario between  30000 and  60000

 
 -- Selecionar todos os dados dos funcionarios com salario de R$ 6000,00 at� R$ 15000.00
 
 SELECT * FROM FUNCIONARIOS WHERE SALARIO >=6000 AND SALARIO <=15000 
 order by Salario asc 
 
 select * from Funcionarios where salario between 6000 and 15000 order by Salario ASC
 
 
 -- Selecionar todos os dados dos funcionarios com salario de R$ 15000,00 at� R$ 50000.00
 
 select * from Funcionarios where salario between 15000 and 50000 
 
  
  -- teste In
  
  -- Selecionar os cod_matricula e nome e codigo do depto dos   funcionarios do depto 1, 2, e 4
  
   select cod_matricula, nome_funcionario, cod_depto from Funcionarios 
   where Cod_Depto  = 1 or cod_depto = 2 or cod_depto = 4 order by cod_depto
  
  select cod_matricula, nome_funcionario, cod_depto from Funcionarios 
  where Cod_Depto in(1,2,4) order by cod_depto   
 
 
 
  -- Selecionar os cod_matricula ,nome, codigo do depto e salario dos   funcionarios do depto 1 e 4 com salario maior que R$ 7000.00
 
 select cod_matricula, nome_funcionario, cod_depto,Salario  from Funcionarios  
 where Cod_Depto in(1,4) and Salario > 7000 order by Cod_Depto 
 
 
 -- selecionar nome dos funcionarios com salario entre R$ 1500.00 e R$ 4000.00 do Depto 2 e 3 
 
  
  select  nome_funcionario,Cod_Depto,salario from Funcionarios
  where (salario between 1500 and 4000) and (Cod_Depto in(2,3))
  
  -- teste like
  
   -- Selecionar todos os dados dos funcionarios que come�am com o 'A'

USE OSIAS
   
   select  * from Funcionarios where nome_funcionario like 'A%'
   
   
   select  * from Funcionarios where nome_funcionario like '%A'
   

   -- Selecionar os funcion�rios que tenham '
   
   select * from Funcionarios where Nome_funcionario like '%Sou_a%'

   


   -- Selecionar todos os dados dos funcionarios que come�am com o 'An'
   
   select  * from Funcionarios where nome_funcionario like 'An%'
   
  
  -- Selecionar todos os dados dos funcionarios que terminam com o 'A'
   
   select  * from Funcionarios where nome_funcionario like '%a'
   
    
  
  -- Selecionar os funcionarios que terminam com o 'S'
  
    select  * from Funcionarios where nome_funcionario like '%s'
    
    
  -- Selecionar os funcionarios que tenha  'S' em qualquer posi��o do nome
  
    select  * from Funcionarios where nome_funcionario like '%s%'
    
    
  -- Selecionar os funcionarios que tenha  'S' em qualquer posi��o do nome e iniciam com  'A'
  
    select  * from Funcionarios where nome_funcionario like 'A%s%'
    
    -- Selecionar todos os dados dos funcionarios que come�am com A at� C em ordem alfab�tica
    
    select  * from Funcionarios where nome_funcionario like '[A-C]%' order by Nome_funcionario asc
  
  
  -- Selecionar todos os dados dos funcionarios que come�am com A at� D dos depto 2 por ordem descrescente de sal�rio
  
     select  * from Funcionarios where nome_funcionario like '[A-D]%' AND  Cod_Depto = 2 order by Salario ASC  
  
  -- Selecionar os funcionarios que come�am com A at� D dos com salario maior que R$ 560.00

 select  * from Funcionarios where nome_funcionario like '[A-D]%' AND  Salario > 560.00



-- Selecionar o nome, salario, salario com acr�scimo de 15% e o depto dos funcionarios 

--    cujo nome coma�am com 'Mar' do depto  1 e 4  e salario maior ou igual a R$ 750.00 e menor ou igual R$ 15000.00 

 select nome_funcionario,salario, cod_depto from funcionarios 
         where nome_funcionario like 'mar%' and cod_depto in(1,4) and salario between 750.00 and 15000.00 order by cod_depto desc



                                cl�usulas GROUP BY e HAVING:

COUNT(expr) Conta quantos valores existem da express�o dada dentro do grupo (se expr for NULL para uma linha, a linha n�o � inclu�da na contagem). 
COUNT(*) 	Conta quantas linhas existem dentro do grupo. 
MAX(expr) 	Retorna o m�ximo valor de expr dentro do grupo. 
MIN(expr) 	Retorna o m�nimo valor de expr dentro do grupo. 
SUM(expr) 	Retorna o somat�rio da express�o dentro do grupo. 
AVG(EXPR)   Retorna a M�dia Aritm�tica da express�o dentro do grupo

select count(*) as 'qtde' from funcionarios

       As fun��es AVG e SUM podem ser usadas apenas com dados num�ricos.
       As outras podem ser usadas com qualquer tipo de coluna.
       As fun��es SUM, AVG e COUNT(expr) permitem  especificar tamb�m o operador DISTINCT, que indica para
       considerar apenas os valores distintos.



Sintaxe
SELECT lista_de_colunas FROM lista_de_tabelas WHERE condi��es GROUP BY lista_de_express�es 
HAVING condi��o


Condi��es 
          A cl�usula WHERE (se presente) separa as linhas que satisfazem as condi��es iniciais.
          A cl�usula GROUP BY organiza as linhas de resultado em grupos de acordo com os valores das express�es
          informadas. A cl�usula HAVING (opcional) seleciona os grupos de acordo com os resultados.

      O resultado do SELECT...GROUP BY... tem uma linha para cada grupo, que pode conter valores de resumo (somat�rio, m�dia, contagem etc.) calculados dentro do grupo.

Quando o GROUP BY est� presente, � poss�vel usar fun��es agregadas, que calculam valores baseado nas linhas de um grupo e geram valores de resumo.
Fun��es agregadas
Al�m da fun��o COUNT, existem outras fun��es agregadas que podem ser usadas para fazer opera��es sobre os elementos do grupo:
AVG (expr) 	Calcula o valor m�dio da express�o expr dentro do grupo. A express�o pode ser um nome de coluna ou calculada a partir de colunas e/ou constantes.


    (Por exemplo, AVG (salario*1.1)
 
 sp_help
Exemplos:
Para saber o n�mero de pessoas que existem na tabela Pessoa, podemos fazer:
Select count(*) from Pessoas

Agora para sabermos o n�mero de pessoas que cadastraram um telefone de fax, podemos fazer:
Select count(FAX) from Pessoas

Ou seja, count(*) retorna todas as linhas, e count(fax) retorna somente as linhas n�o-nulas da coluna fax.

Para sabermos qual a m�dia de pre�os dos produtos, podemos fazer:
Select avg(Preco) as "M�dia de Pre�os" from Produto

Para sabermos qual � o produto mais caro e o produto mais barato, podemos fazer:
Select Max(Preco) as "Mais Caro",Min(Preco) as "Mais Barato" from Produto

Para sabermos qual a quantidade total de produtos em estoque, podemos fazer:
Select SUM(QuantDisponivel) as "Total de Produtos" from Produto




Detalhes do GROUP BY

A cl�usula GROUP BY agrupa valores baseado em uma ou mais colunas. Geralmente quando usamos a GROUP BY, devemos utilizar uma das fun��es de agrega��o mostradas anteriormente.
 
 As colunas de resultado da cl�usula SELECT (a lista de colunas ap�s o SELECT) podem ser apenas:
�	Uma coluna presente na lista do GROUP BY OU
�	 Um valor gerado por uma fun��o agregada
�	 Outras colunas n�o podem ser inclu�das no resultado, porque teriam valores diferentes para cada linha do
      grupo.


  Exemplos:
   Para sabermos quantas pessoas existem em cada categoria, podemos fazer:
Select codcategoria, count(*) as "Total de Pessoas" from RelPessoaCategoria   group by CodCategoria


  Para sabermos quantas movimenta��es foram feitas para cada produto, podemos fazer:
Select CodProduto, Count(*) as "Total"  from MovimentacaoProduto Where TIPOMOV='S' group by Codproduto

Para sabermos qual o �ltima vez que cada produto foi vendido, podemos fazer:

Select CodProduto, max(datamov) from MovimentacaoProduto where TIPOMOV='S'
group by codproduto

Para sabermos a quantidade total comprada por produto, podemos fazer:
Select CodProduto, sum(quantidade) from MovimentacaoProduto where tipomov='S'
Group by CODPRODUTO

Para obtermos a quantidade total vendida por produto no m�s de maio de 2010, em ordem crescente por quantidade, podemos fazer:
Select Codproduto, sum(quantidade) from MovimentacaoProduto where tipomov='s' and (datamov between '05/01/10' and '06/01/10') group by codproduto order by sum(quantidade)


Usando a cl�usula HAVING
Ap�s feito o agrupamento, pode-se usar a cl�usula HAVING para selecionar quais os grupos a serem inclu�dos no resultado.

   Exemplo:
     Para sabermos qual o total de sa�das obtidas para cada produto, sendo que desejamos visualizar apenas os totais de sa�das maiores que 50 unidades, podemos fazer:
 Select CodProduto, sum(quantidade)from MovimentacaoProduto where tipomov='S'
Group by CODPRODUTO having sum(quantidade)>50

Note:
  1)  As cl�usulas WHERE e HAVING s�o semelhantes, mas WHERE seleciona as linhas da tabela que ir�o participar da gera��o do resultado.
   Essas linhas ser�o agrupadas e depois HAVING � aplicado ao resultado de cada grupo, para saber quais grupos v�o aparecer no resultado.
  2)  Nas condi��es usadas por HAVING s� podem aparecer valores que sejam os mesmos em todos os elementos do grupo.




-- TESTE DE AGRUPAMENTO

-- Selecionar a quantidade de funcion�rios da empresa

SELECT * FROM Funcionarios 
 
   select COUNT(*) as 'Qtde Funcion�rios' from funcionarios
   
   select COUNT(Cod_matricula) from funcionarios

-- Selecionar a quantidade de funcion�rios da empresa com salario  maior que R$ 5000.00
   
   select COUNT(*) as 'Qtde Funcionarios' from funcionarios where Salario > 5000.00
   
   -- Selecionar a m�dia de salario da empresa
   
   select avg(salario) as 'M�dia de Sal�rio' from funcionarios  
   
   
   
   -- Selecionar a m�dia de salario da empresa do depto 4
   
   select avg(salario) as 'M�dia de Sal�rio' from funcionarios 
   where Cod_Depto = 4
   
   
   -- Selecionar o maior sal�rio da empresa 
   
   select max(salario) as 'Maior Sal�rio' from funcionarios
   

   select nome_funcionario, MAX(salario)  from  Funcionarios 
   group by nome_funcionario
   
   select MAX(salario),cod_depto  from  Funcionarios 
   group by cod_depto

   sp_help funcionarios
   
   -- Selecionar o menor sal�rio da empresa 
   
   select min(salario) as 'Menor Sal�rio' from funcionarios
   
   
   -- Selecionar o menor sal�rio da empresa do depto 3
   
    select min(salario) as 'Menor Sal�rio' from funcionarios  
	where cod_depto = 3
   
   
   
    -- Selecionar o maior sal�rio da empresa de cada depto agrupando por depto
   
      select max(salario) as 'Maior Sal�rio',cod_depto  from funcionarios
	  group by cod_depto
   
   select max(salario) as 'Maior Sal�rio',cod_depto  from funcionarios 
   where cod_depto =2 group by cod_depto
   
   select max(salario) as 'Maior Sal�rio',cod_depto  from funcionarios 
   group by cod_depto having cod_depto = 2
   
    -- Selecionar o total de salarios pago por depto 
   
   select sum(salario) as 'Total',cod_depto  from funcionarios 
   group by cod_depto
   
   
   -- Selecionar o total de  salarios pago por pelo depto 2
     
                                                                            
      select sum(salario) as 'Total' ,cod_depto  from funcionarios group by cod_depto having cod_depto = 2
   
   
      
      select sum(salario) as 'Total'  from funcionarios WHERE cod_depto = 2
      
     select cod_depto, sum(salario) as 'Total'  from funcionarios
	 group by cod_depto having cod_depto = 2
         
         
         -- erro cod_depto n�o faz parte do comando de agrega��o
         
         select cod_depto, sum(salario) as 'Total'  from funcionarios
		 WHERE cod_depto = 2  
         
         
  -- Selecionar a quantde de funcion�rio , o maior, o menor e a m�dia de salario da empresa 
         
     select count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  from funcionarios 
     
     
     -- Selecionar a quantde de funcion�rio , o maior, o menor e a m�dia de salario da empresa do depto 1
     
     select count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  where Cod_Depto = 1
     
     select count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto having Cod_Depto = 1
     
     select cod_depto, count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto having Cod_Depto = 1
     
     
     -- Selecionar a quantidade de de funcion�rio , o maior, o menor e a m�dia de salario da empresa por depto
     
     select cod_depto, count(Cod_Matricula)  as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto
     
     --          obs.: pode-se usar * no cod_matricula     
     
     select cod_depto, count(*)  as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto
     rios
	 group by cod_depto having cod_depto = 2
         
         
         -- erro cod_depto n�o faz parte do comando de agrega��o
         
         select cod_depto, sum(salario) as 'Total'  from funcionarios
		 WHERE cod_depto = 2  
         
         
  -- Selecionar a quantde de funcion�rio , o maior, o menor e a m�dia de salario da empresa 
         
     select count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  from funcionarios 
     
     
     -- Selecionar a quantde de funcion�rio , o maior, o menor e a m�dia de salario da empresa do depto 1
     
     select count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  where Cod_Depto = 1
     
     select count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto having Cod_Depto = 1
     
     select cod_depto, count(*) as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto having Cod_Depto = 1
     
     
     -- Selecionar a quantidade de de funcion�rio , o maior, o menor e a m�dia de salario da empresa por depto
     
     select cod_depto, count(Cod_Matricula)  as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto
     
     --          obs.: pode-se usar * no cod_matricula     
     
     select cod_depto, count(*)  as 'Funcion�rios' , max(salario) as 'Maior', min(salario) as 'Menor' ,avg(salario) as 'M�dia'  
     from funcionarios  group by cod_depto
     