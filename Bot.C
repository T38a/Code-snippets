public partial class Form1 : Form
    {
        DiscordSocketClient client = new DiscordSocketClient();

        public Form1()
        {
            InitializeComponent();
            client.LoginAsync(TokenType.Bot, "bot token");
            client.StartAsync();
        }

        private async void MessageBTN_Click(object sender, EventArgs e)
        {
            //variables
            string MSGToSend = textBox1.Text; //textbox varaiable
            var channel = client.GetChannel(channelid) as ISocketMessageChannel; //find the channel to perform actions in
            string[] keywords = {"Mod", "mod", "mods","Mods"}; //keywords for validation
            bool containsKeyword = false; //bool to decide if if MSGToSend contains any Keywords

            //validation
            foreach (string keyword in keywords)
            {
                if (MSGToSend.Contains(keyword))
                {
                    containsKeyword = true;
                    break; //exit loop
                }
            }

            if (containsKeyword)
            {
                await channel.SendMessageAsync(MSGToSend); //send MSGToSend to the discord channel
            }
            else
            {
                Console.WriteLine("Message did not contain keyword"); //write to console that no keyword was used
            }
        }
    }
