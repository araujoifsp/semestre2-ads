/* 
                                Trabalhando com Datas 

*/

use ALUNO_F17

create table teste1 
(
  codigo  int,
  data   date default getdate()
)

insert into teste1 (data) values ('2022/12/30')

select * from teste1




--  Nota: getdate() - acessa a data do sistema

/*  datediff  - Retorna o número de períodos entre duas datas. 
    
 
     Sintaxe
  - datediff(qtde,start_data1,End_data2) -- retorna a quantidade de dias   (DATA2 - DATA1)
  
 
  onde: 
    qtde --> D/DD/ DAY       -->   Retorna a qtde de dias
            M/MM/MONTH       -->   Retorna a qtde de meses  --->  exemplo  29/03/2011      26/05/2011  ---  retorna 2
            YY/YYYY/YEAR     -->   Retorna a DIFRENÇA de anos
            Q/QQ            -->    Retorna a DIFERENÇA de quartos de ano                                                    
            WW/WK/WEEK       -->   Retorna a quantidade de semanas
            hh/hour          -->   Retorna a diferença de horas  
            n/mi/minute      -->   Retorna a diferença de minutos 
            s/ss/second      -->   Retorna a diferença de segundos 
            ms/millisecond   -->   Retorna a diferença de milisegundos


obs.:

Para um valor retornado fora do intervalo para int (-2.147.483.648 a +2.147.483.647), DATEDIFF retorna um erro. 
Para millisecond, a diferença máxima entre start_data e end_data é de 24 dias, 20 horas, 31 minutos e 23.647 segundos. 
Para segundo, a diferença máxima é de 68 anos, 19 dias, 3 horas, 14 minutos e 7 segundos.




 
 Exemplos

-- Dias
*/
SELECT datediff(DD,'2021/12/30','2022/05/25') as dias
SELECT datediff(D,'26/05/2021','29/10/2021') as dias
SELECT datediff(DAY,'26/05/2021','25/05/2022') as dias

--Meses
SELECT datediff(M,'29/03/2021','26/05/2021')
SELECT datediff(MM,'26/05/2021','29/03/2021')
SELECT datediff(MONTH,'26/05/2021','29/03/2023')



--Anos
SELECT datediff(yy,'29/03/2021','26/05/2021')
SELECT datediff(YYYY,'26/05/2021','29/03/2022')
SELECT datediff(YEAR,'26/05/2021','29/03/2023')

SELECT datediff(Q,'29/03/2021','26/05/2021')
SELECT datediff(QQ,'26/05/2022','29/03/2022')



-- HORAS
SELECT datediff(HH,'08:45','10:30')
SELECT datediff(HOUR,'08:45','10:30')


-- MINUTO
SELECT datediff(N,'26/05/2021','29/03/2022')
SELECT datediff(MI,'08:45','10:30')
SELECT datediff(MINUTE,'08:45','9:45')


--SEGUNDOS
 SELECT datediff(S,'26/05/2021','29/03/2022')
 SELECT datediff(SS,'08:45','10:30')
 SELECT datediff(SECOND,'08:45','9:50')
SELECT datediff(SECOND,'08:45','8:50')


-- MILESEGUNDOS

SELECT datediff(MS,'08:45','10:30')
SELECT datediff(millisecond,'08:45','10:30')

----------------------------------------------------


--DATEADD - Adiciona uma parte de datas

DateAdd (datepart, número, data)

SELECT DateAdd(dd,3,'25/05/2021')
SELECT DateAdd(m,3,'25/05/2021')
SELECT DateAdd(yy,3,'25/05/2021')
SELECT DateAdd(Q,3,'25/05/2021')



/*
drop database teste1
go
create database teste1
go
use aluno_f200
go
*/
create table tb_teste
(
 codigo varchar (2), 
 Desc_Prod varchar(10),
 Data_Vencimento date
 constraint pk_Teste primary key(codigo)
 )
go
insert into tb_teste values ('p1','AAAAAAA','20/12/2021')

insert into tb_teste values ('p2','BBBBBBBB','20/12/2022')
insert into tb_teste values ('p3','CCCCCCCC','27/11/2021')
insert into tb_teste values ('p4','CCCCCCCC','29/09/2022')
insert into tb_teste values ('p5','CCCCCCCC','29/01/2022')
insert into tb_teste values ('p6','CCCCCCCC','29/03/2019')


--Funções de sistema do SQL Server que retornam a data e a hora atuais para retornar a data, a hora ou ambas.
Os valores são retornados em série, portanto, seus segundos fracionários podem ser diferentes.


go

SELECT CONVERT (time, SYSDATETIME())
    ,CONVERT (time, GETDATE())

SELECT CONVERT (date, SYSDATETIME())
    ,CONVERT (date, GETDATE())
   



-- LISTAR O NOME DO PRODUTO,DATA DO DIA E VENCIMENTO DE TODOS OS PRODUTOS

  SELECT Desc_Prod,GETDATE()AS 'Data do dia'  ,DATA_VENCIMENTO as vencimento FROM tb_teste 
  
  

---- LISTAR O CÓDIGO, NOME DO PRODUTO,DATA DO DIA E VENCIMENTO DE TODOS OS PRODUTOS VENCIDOS

  SELECT CODIGO, Desc_Prod,GETDATE() AS 'Data do dia' ,DATA_VENCIMENTO FROM tb_teste WHERE Data_Vencimento <  GETDATE()

  select desc_prod from tb_teste where  desc_prod like '[ac]%'



---- LISTAR O CÓDIGO, NOME DO PRODUTO,DATA DO DIA, VENCIMENTO e nº dias vencidos DE TODOS OS PRODUTOS VENCIDOS

SELECT CODIGO, Desc_Prod,GETDATE() AS 'Data do dia' ,DATA_VENCIMENTO,datediff(d,data_vencimento,GETDATE()) as 'Qtde Vencidos'  FROM tb_teste WHERE Data_Vencimento <  GETDATE()

---- LISTAR O CÓDIGO, NOME DO PRODUTO,DATA DO DIA, VENCIMENTO e PRAZO PARA VENCER (DIAS) DE TODOS OS PRODUTOS NÃO VENCIDOS

SELECT CODIGO, Desc_Prod,GETDATE() AS 'Data do dia' ,DATA_VENCIMENTO,datediff(D,GETDATE(),data_vencimento) as 'Dias a vencer'  FROM tb_teste WHERE Data_Vencimento >=  GETDATE()

---- LISTAR O CÓDIGO, NOME DO PRODUTO,DATA DO DIA, VENCIMENTO e PRAZO PARA VENCER (MESES)  A VENCER DE TODOS OS PRODUTOS NÃO VENCIDOS


SELECT CODIGO, Desc_Prod,GETDATE() AS 'Data do dia' ,DATA_VENCIMENTO,datediff(m,GETDATE(),data_vencimento) as 'meses a vencer'  FROM tb_teste WHERE Data_Vencimento >=  GETDATE()

select GETDATE(),data_vencimento,DATEDIFF(m,data_vencimento,getdate()) from tb_teste
