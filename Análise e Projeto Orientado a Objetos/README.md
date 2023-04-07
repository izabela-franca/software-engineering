# :memo: Projeto

Para realizar esta atividade você é convidado a exercitar os conhecimentos adquiridos na disciplina de Análise e Projeto Orientado a Objetos, para isso leia atentamente o estudo de caso da Pizzaria do Sr. Genaro e produza os elementos solicitados.
 
A pizzaria do Sr Genaro é reconhecida pela dedicação ao trabalho artesanal de fazer as pizzas. No entanto, seu negócio tomou grande proporção e não é possível crescer sem um sistema de informação.  A pizzaria está dividida nas áreas de “Pedido”, “Produção” e “Entrega”. A área de “Pedido” contempla o atendimento ao cliente para registro da solicitação da pizza. O atendimento ocorre por call center. O atendente registra os dados do cliente, confirma o endereço e registra a solicitação. Ao finalizar a solicitação, o atendente envia para a área de “Produção”. Na “Produção”, a solicitação deve seguir uma fila. O cozinheiro prepara os produtos e separa as bebidas. Ao concluir, o produto é embalado e encaminhado para a “Entrega”. A entrega do produto deve ocorrer no máximo em 40 min após a solicitação do cliente.  Ao receber o pagamento, quando retorna a pizzaria, o entregador conclui a solicitação do cliente no sistema.

Para a entrega da atividade escreva SOMENTE os fluxos dos CASOS DE USO: <br>
1 - UC001 - Solicitar Pedido <br>
2 - UC002 - Cadastrar cliente <br>


Sendo eles:

A - Fluxo básico<br>
B - Fluxo alternativo<br>
C - Fluxo de exceção<br>

Abaixo segue os requisitos levantandos no estudo de caso, bem como o diagrama de casos de uso e o modelo do Template a ser enviado na atividade.
 
## 1.Requisitos do projeto
 
### 1.1- Necessidades
 
NE01 - Otimizar o tempo do pedido até a entrega da pizza para que chegue em 40min ao cliente.
NE02 - Ter o histórico dos pedidos para controle
 
### 1.2 - Requisitos funcionais
RF01 – O sistema deve permitir que o atendente o cadastro de clientes com Nome, telefone e endereço; <br>
RF02 – O sistema deve permitir registrar um pedido com pizza e bebidas;<br>
RF03 – O sistema deve permitir que cadastrar sabores de pizza;<br>
RF04 – O sistema deve permitir cadastrar bebidas;<br>
RF05 – O sistema deve encaminhar o pedido a produção quando o pedido for cadastrado pelo atendente;<br>
RF06 – O sistema deve permitir que o usuário mantenha histórico de cada solicitação realizada.<br>
RF07 - O sistema deve encaminhar o pedido a entrega quando a produção finalizar a pizza e separar as bebidas;<br>
RF09 - O sistema deve permitir o registro do pagamento do cliente;<br>
RF10 - O sistema deve permitir que o entregador conclua a solicitação pelo sistema;<br>
 
### 1.3 - Requisitos não funcionais
RNF01 - O sistema deve ser executado de forma local;<br>
RNF02 - O tempo de processamento de cada tela deve ocorrer em no máximo 10 segundos;<br>
 
### 1.4 - Regras de negócio
 
RN01 - A produção deve respeitar a fila de pedidos de acordo com a solicitação dos clientes;<br>
RN02 - A entrega deve ocorrer de no máximo 40 minutos após a solicitação do cliente;<br>
 
## 2.Interfaces

![image](https://user-images.githubusercontent.com/101933646/230690564-29548638-5294-4058-bc07-15cd16f31d0f.png)

## 3.   Diagrama de casos de uso

![image](https://user-images.githubusercontent.com/101933646/230690572-44b4842a-2cc9-43f2-a124-18fb327f8f51.png)


FONTE: Unicesumar
