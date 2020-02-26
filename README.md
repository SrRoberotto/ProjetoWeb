# ProjetoWeb
Projeto da disciplina web, ADS2019.2 do IFBA

O Sistema de gerenciamento de vazão trata se de um site que apresentará relatórios e dados estatísticos coletados através de um medidor de vazão, dispositivo que será conectado a um micro controlador Esp32.

REQUISITOS FUNCIONAIS 
[ ] RF01 - Conectar ao wi-fi determinado: Essa funcionalidade torna possível a conexão do ESP32 com o site para envio dos dados dos sensores.
[ ] RF02 - Postar os dados dos sensores no site: Os dados dos sensores serão enviados através de requisições HTTP direcionadas ao servidor web PHP. 
[ ] RF03 - Ler os dados dos sensores de vazão: O microcontrolador ESP32 terá como função identificar os dados coletados pelo sensor de vazão e armazenar por alguns instantes em seu dispositivo.  
[ ] RF04 - Inserir os dados no banco de dados: O servidor Web PHP se conectará ao banco de dados para gravar os dados recebidos do ESP32
[ ] RF05 - Visualizar relatórios e estatísticas abertas:  O servidor PHP consulta os dados do banco de dados e exibe de forma resumida para os usuários que acessarem o site sem fazer login. 
[ ] RF06 - Visualizar relatórios e estatísticas restritas: O servidor PHP consulta os dados do banco de dados, calcula as informações e exibe para o usuário logado, que terá acesso a relatórios com informações mais detalhadas sobre o consumo.
[ ] RF07 - Efetuar login no site: Através de Login e Senha previamente cadastrada por um usuário Administrador.
[ ] RF08 - Cadastrar usuários: Os usuários com perfil de administrador podem cadastrar usuários no servidor Web, fornecendo um nome de usuário, a senha e a definição de perfil comum ou administrador.
[ ] RF09 - Alterar usuários: Os usuários com perfil de administrador podem alterar os dados dos usuários no servidor Web, podendo alterar a senha e a definição de perfil comum ou administrador.
[ ] RF10 - Apagar usuários: Os usuários com perfil de administrador terão como funcionalidade deletar outros usuários cadastrados
[ ] RF11 - Definir perfil de usuários: Os usuários com perfil de administrador podem visualizar e definir quais usuários terão acesso de administrador ou comum.
