private void ConfirmDirBTN_Click(object sender, EventArgs e)
        {
            string GameDir = GameDire.Text;
            string[] keywords = { "Origin", "Steam", "orgin", "steam" };
            bool containsKeyword = false;

            foreach (string keyword in keywords)
            {
                if (GameDire.Text.Contains(keyword))
                {
                    containsKeyword = true;
                    break;
                }
            }

            if (containsKeyword)
            {
                Console.WriteLine("Users game directory is: " + GameDir + "." + " It also contains a keyword");
            }
            else
            {
                MessageBox.Show("Game directroy must include: " + "Origin, Steam, origin or steam!");
            }
        }

//all it did is check to see if the textbox entry contains keywords
